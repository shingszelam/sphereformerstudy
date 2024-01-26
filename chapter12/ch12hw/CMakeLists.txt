cmake_minimum_required(VERSION 3.26)
project(chapter12hw)

set(CMAKE_CXX_STANDARD 14)

add_executable(use1 1.h 1.cpp use1.cpp)

add_executable(use2 String2.h string2.cpp use2.cpp)

add_executable(use3 stock.h stock.cpp use3.cpp)

add_executable(use4 stack.h stack.cpp use4.cpp)

add_executable(use5 queue.cpp queue.h use5.cpp)

add_executable(use6 queue.h queue.cpp use6.cpp)