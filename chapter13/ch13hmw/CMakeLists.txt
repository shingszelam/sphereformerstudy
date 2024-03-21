cmake_minimum_required(VERSION 3.26)
project(ch13hmw)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ch13hmw
        1.cpp
        1.h
        use1.cpp)
add_executable(use2 use2.cpp 2.cpp 2.h)
add_executable(use3 attcabc3.h attcabc3.cpp use3.cpp)
add_executable(use4 test4.h test4.cpp use4.cpp)