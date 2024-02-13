#!/bin/bash
cd build || exit
cmake -DCMAKE_BUILD_TYPE=debug ../
make
ctest
./basalt
