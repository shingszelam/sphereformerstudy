cmake_minimum_required(VERSION 3.26)
project(chapter11)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter11
        mytime0.h
        mytime0.cpp
usetime0.cpp)

add_executable(usetime1 mytime1.h mytime1.cpp usetime1.cpp)

add_executable(usetime2 mytime2.cpp mytime2.h usetime2.cpp)

add_executable(usetime3 mytime3.h mytime3.cpp usetime3.cpp)

add_executable(randwalk vect.h vect.cpp randwalk.cpp)

add_executable(stone stonewt.h stonewt.cpp stone.cpp)
add_executable(stone1 stonewt1.h stonewt1.cpp stone1.cpp)