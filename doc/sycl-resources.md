

https://www.codingame.com/playgrounds/48226/introduction-to-sycl/getting-started

https://www.intel.com/content/www/us/en/developer/articles/training/programming-data-parallel-c.html

DPC++
https://www.intel.com/content/www/us/en/developer/videos/introduction-to-intel-oneapi-dpc-programming.html#:~:text=Data%20Parallel%20C%2B%2B%20(DPC%2B%2B),performance%20across%20CPUs%20and%20accelerators.

https://developer.codeplay.com/products/computecpp/ce/2.11.0/guides/platform-support-notes/computecpp-with-ptx-for-nvidia-devices

https://developer.codeplay.com/products/computecpp/ce/2.11.0/guides/interactive-sycl-tutorial

https://www.youtube.com/watch?v=7Ff0JwxNlFQ
Compile Hello SYCL to Learn SYCL with DPC++ on DevCloud | XPU Blog | Intel Software


XPUs
https://www.intel.com/content/www/us/en/developer/articles/technical/xpublog0001-hello-sycl-and-dpcpp.html

Data Parallel C++
Data Parallel C++
Mastering DPC++ for Programming of Heterogeneous Systems using C++ and SYCL
https://link.springer.com/book/10.1007/978-1-4842-5574-2
(open-access book)


https://www.youtube.com/watch?v=fxCnpNVPazk
CppCon 2020: Heterogeneous Programming in C++ with SYCL 2020 - Michael Wong & Gordon Brown


https://stackoverflow.com/questions/62110463/using-sycl-1-2-in-macos

g: how to compile sycl on docker

https://github.com/danchitnis/sycl-container

```bash
docker pull danchitnis/sycl-container:llvm-dev
docker run -it -v $(pwd):/root/ danchitnis/sycl-container:llvm-dev clang++ -fsycl ./SyCL/histogram.cpp
```
