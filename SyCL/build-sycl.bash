#!/usr/bin/env bash


#  intel/oneapi-basekit:devel-ubuntu22.04
#  intel/oneapi-runtime:ubuntu22.04
# non existent: intel/oneapi:base-ubuntu

docker run \
    --rm -it \
    -v $(pwd):/app \
    -w /app \
    intel/oneapi-basekit:devel-ubuntu22.04 \
      /bin/bash \
        # -c  "apt-get update && apt-get install -y intel-oneapi-dpcpp-cpp-compiler intel-opencl-icd && dpcpp -O2 -o histogram sycl_histogram.cpp && ./histogram"


# dpcpp -O2 -o histogram sycl_histogram.cpp
# icpx: warning: use of 'dpcpp' is deprecated and will be removed in a future release. Use 'icpx -fsycl' [-Wdeprecated]
# icpx: error: no such file or directory: 'sycl_histogram.cpp'
# icpx: error: no input files

# icx -O2 -o histogram histogram.cpp

# icx -O2 -o histogram histogram.cpp
# histogram.cpp:4:10: fatal error: 'CL/sycl.hpp' file not found
# #include <CL/sycl.hpp>
#          ^~~~~~~~~~~~~
