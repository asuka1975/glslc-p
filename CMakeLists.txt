cmake_minimum_required(VERSION 3.22)
project(glslc_p)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

add_executable(glslc_p main.cpp)
