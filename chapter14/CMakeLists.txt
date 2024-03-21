cmake_minimum_required(VERSION 3.26)
project(chapter14)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chapter14
        studentc.cpp
        studentc.h
use_stuc.cpp)


add_executable(usestui studenti.cpp studenti.h use_stui.cpp)
add_executable(useworker worker0.h worker0.cpp worktest.cpp)
add_executable(leecode leecode.cpp)
add_executable(usework workermi.h workermi.cpp workmi.cpp)

add_executable(stacktp stacktp.cpp stacktp.h)
add_executable(stack1 stackp1.h stackp1.cpp)
add_executable(twod arraytp.cpp arraytp.h)

add_executable(usepairs pairs.cpp)
add_executable(usetempmemb tempmemb.cpp)
add_executable(usstempparm tempparm.cpp stacktp.h)
add_executable(usefrnd frnd2tmp.cpp)
add_executable(usetmp2 tmp2tmp.cpp)
add_executable(usemf manyfrnd.cpp)

add_subdirectory(ch14hmwk)

add_executable(test4 person.cpp person.h test4.cpp)