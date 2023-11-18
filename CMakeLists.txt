cmake_minimum_required(VERSION 3.5)

project(
  raytracer
  VERSION 0.1
  DESCRIPTION "Simple C++ raytracer"
  LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(apps)