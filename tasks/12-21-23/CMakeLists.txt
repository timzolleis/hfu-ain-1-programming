cmake_minimum_required(VERSION 3.26)
project(12_21_23_task01_test)

# Include directories for the second project
include_directories(types)

# Add executable for the second project
add_executable(12_21_23_task01
        types/SafeArray.h
        utils/SafeArray.cpp
        task-01.cpp
)
