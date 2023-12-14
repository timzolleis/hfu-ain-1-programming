cmake_minimum_required(VERSION 3.26)

# Project for hfu_ain_1_programming
project(hfu_ain_1_programming)
set(CMAKE_CXX_STANDARD 14) # Set C++ standard for the project

# Include directories for the first project
include_directories(tasks/12-14-23/types)

# Add executable for the first project
add_executable(hfu_ain_1_programming
        tasks/12-14-23/types/stack.h
        tasks/12-14-23/utils/stack.cpp
        tasks/12-14-23/task-02.cpp
)

# Separate project for 12_21_23_task01
project(12_21_23_task01)

# Include directories for the second project
include_directories(tasks/12-21-23/types)

# Add executable for the second project
add_executable(12_21_23_task01
        tasks/12-21-23/types/SafeArray.h
        tasks/12-21-23/utils/SafeArray.cpp
        tasks/12-21-23/task-01.cpp
)
