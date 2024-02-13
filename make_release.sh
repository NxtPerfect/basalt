#!/bin/bash
cd build || exit
cmake ../
make
./basalt
