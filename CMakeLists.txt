cmake_minimum_required(VERSION 3.26)
project(hfu_ain_1_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(tasks/12-14-23/types)

add_executable(hfu_ain_1_programming
        tasks/12-14-23/types/stack.h
        tasks/12-14-23/utils/stack.cpp
        tasks/12-14-23/task-02.cpp)
