#!/bin/sh

mkdir -p build_linux && cd build_linux
cmake ../
cd ..
cmake --build build_linux --config Release
