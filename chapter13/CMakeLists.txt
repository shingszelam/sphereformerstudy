cmake_minimum_required(VERSION 3.26)
project(chapter13)

set(CMAKE_CXX_STANDARD 14)

add_executable(usett0
        tabtenn0.cpp
        tabtenn0.h
usett0.cpp)

add_executable(usett1 tablenn1.h tablenn1.cpp usett1.cpp)
add_executable(usebrass1 brass.h brass.cpp usebrass1.cpp)
add_executable(usebrass2 brass.h brass.cpp usebrass2.cpP)
add_executable(usebrass3 acctabc.h acctabc.cpp usebrass3.cpp)
add_executable(usedma usedma.cpp dma.h dma.cpp )