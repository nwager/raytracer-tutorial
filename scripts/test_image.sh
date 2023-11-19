#!/bin/sh

set -e

cd "$( dirname "$0" )"/.. # cd to project root dir

mkdir -p build
cd build
cmake ..
make
rm -f test.ppm test.png

echo "Running target..." 
apps/raytracer_app > test.ppm
convert test.ppm test.png
echo "Generated build/test.png"
open test.png