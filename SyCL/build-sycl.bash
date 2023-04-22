#!/usr/bin/env bash

docker run \
    --rm -it \
    -v $(pwd):/app \
    -w /app \
    intel/oneapi:base-ubuntu \
      /bin/bash -c \
        "apt-get update && apt-get install -y intel-oneapi-dpcpp-cpp-compiler intel-opencl-icd && dpcpp -O2 -o histogram sycl_histogram.cpp && ./histogram"
