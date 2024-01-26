#!/bin/bash
cd build
cmake -DCMAKE_BUILD_TYPE=debug ../
make
ctest
./basalt
