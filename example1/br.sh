#!/bin/bash

# run this shell script to cmake and run the program

rm -rf build/
mkdir -p build
cmake -S . -B build
cd build
make
./main
cd ..
