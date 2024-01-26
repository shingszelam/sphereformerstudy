cmake_minimum_required(VERSION 3.26)
project(chapter12)

set(CMAKE_CXX_STANDARD 14)


add_executable(chapter12 strngbad.h strngbad.cpp vegnews.cpp)
add_executable(sayings string1.h string1.cpp sayings1.cpp)
add_executable(sayings2 string1.h string1.cpp sayings2.cpp)
add_executable(placenew1 placenew1.cpp)
add_executable(newplace2 newplace2.cpp)

add_executable(bank queue.h queue.cpp bank.cpp)

add_subdirectory(ch12hw)