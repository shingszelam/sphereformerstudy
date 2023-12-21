cmake_minimum_required(VERSION 3.26)
project(chapter10 )

set(CMAKE_C_STANDARD 14)

include_directories(.)

add_executable(chapter10 usestock0.cpp  stock00.cpp stock00.h)
add_executable(usestock1 usestock1.cpp stock10.cpp stock10.h)
add_executable(usestock2 usestock2.cpp stock20.cpp stock20.h)
add_executable(stacker stacker.cpp stack.cpp stack.h)