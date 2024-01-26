cmake_minimum_required(VERSION 3.26)
project(ch11hw)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ch11hw
        randwalk.cpp
        vect.cpp
        vect.h)

add_executable(use2 2.h 2.cpp use2.cpp )
add_executable(use3 2.h 2.cpp use3.cpp )
add_executable(use4 4.h 4.cpp use4.cpp)

add_executable(use5 5.h 5.cpp use5.cpp)

add_executable(use6 6.h 6.cpp use6.cpp)

add_executable(use7 7.h 7.cpp use7.cpp)