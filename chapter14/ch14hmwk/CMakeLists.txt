cmake_minimum_required(VERSION 3.26)
project(ch14hmwk)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ch14hmwk
        test1wine.cpp
        test1wine.h
usewine.cpp)
add_executable(usewine2 test2.h test2.cpp usewine.cpp)

add_executable(use3 test3.h test3.cpp work.cpp work.h)

add_executable(use4 Person.cpp Person.h useperson.cpp)