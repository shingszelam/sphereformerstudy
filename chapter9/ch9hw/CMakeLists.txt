cmake_minimum_required(VERSION 3.26)
project(ch9hw)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ch9hw
        golf.cpp
        1.cpp
        golf.h)
add_executable(2 2.cpp)
add_executable(3 3.cpp)
add_executable(namesp 4.cpp namesp.cpp namesp.h)
