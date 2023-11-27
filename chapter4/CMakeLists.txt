cmake_minimum_required(VERSION 3.26)
project(chapter4)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter4
        assgn_st.cpp)

add_executable(address address.cpp)
add_executable(pointer pointer.cpp)
add_executable(init_ptr init_ptr.cpp)
add_executable(use_new use_new.cpp)
add_executable(arraynew arraynew.cpp)
add_executable(addpntrs addpntrs.cpp)
add_executable(ptrstr ptrstr.cpp)
add_executable(newstrct newstrct.cpp)
add_executable(delete delete.cpp)
add_executable(choices choices.cpp)
add_executable(instr2 instr2.cpp)


