#include <iostream>
#include <vector>
#include <algorithm>
#include <CL/sycl.hpp>

int main()
{
    const int size = 20; // Size of data
    const int num_bins = 5; // Number of histogram bins
    std::vector<float> data = {0.2, 0.4, 0.5, 0.3, 0.8, 0.6, 0.1, 0.7, 0.9, 0.4, 0.5, 0.6, 0.2, 0.3, 0.1, 0.7, 0.8, 0.9, 0.1, 0.2};
    std::vector<int> histogram(num_bins, 0);

    // Calculate min and max values
    auto minmax = std::minmax_element(data.begin(), data.end());
    float min_val = *minmax.first;
    float max_val = *minmax.second;

    // Calculate bin width
    float bin_width = (max_val - min_val) / num_bins;

    // Create SYCL queue
    cl::sycl::queue q;

    // Create SYCL buffers
    cl::sycl::buffer<float, 1> data_buf(data.data(), cl::sycl::range<1>(size));
    cl::sycl::buffer<int, 1> histogram_buf(histogram.data(), cl::sycl::range<1>(num_bins));

    // Submit SYCL kernel
    q.submit([&](cl::sycl::handler& cgh)
    {
        auto data_acc = data_buf.get_access<cl::sycl::access::mode::read>(cgh);
        auto histogram_acc = histogram_buf.get_access<cl::sycl::access::mode::atomic>(cgh);

        cgh.parallel_for<class histogram>(
            cl::sycl::range<1>(size),
            [=](cl::sycl::item<1> item)
            {
                int bin_index = (int)((data_acc[item] - min_val) / bin_width);
                if (bin_index >= num_bins)
                {
                    bin_index = num_bins - 1;
                }
                histogram_acc[bin_index]++;
            }
        );
    });

    // Wait for kernel to finish
    q.wait();

    // Print histogram
    for (int i = 0; i < num_bins; i++)
    {
        std::cout << "Bin " << i << ": " << histogram[i] << std::endl;
    }

    return 0;
}
