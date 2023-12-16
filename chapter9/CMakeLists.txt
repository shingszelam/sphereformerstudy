cmake_minimum_required(VERSION 3.26)
project(chapter9)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chapter9
        coordin.h
        file.cpp
        file2.cpp)

add_executable(autoscp autoscp.cpp)
add_executable(YourProjectName external.cpp support.cpp)
add_executable(project2 topfile.cpp topfile2.cpp)
add_executable(static static.cpp)
add_executable(newplace newplace.cpp)
add_executable(namesp usenamesp.cpp namesp.cpp namesp.h)