cmake_minimum_required(VERSION 2.8)
project(COMPCOST, CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -g -Ofast")

add_subdirectory(src)
add_subdirectory(main)
