cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 14) # Set C++ standard for the project



# Project for 12_14_23_task02
project(12_14_23_task02)

# Include directories for the first project
include_directories(tasks/12-14-23/types)

# Add executable for the first project
add_executable(tasks_12_24_23_01
        tasks/12-14-23/types/stack.h
        tasks/12-14-23/utils/stack.cpp
        tasks/12-14-23/task-01.cpp
)

# Separate project for 12_21_23_task01
project(12_21_23_task01)

# Include directories for the second project
include_directories(tasks/12-21-23/types)

# Add executable for the second project
add_executable(tasks_12_21_23_01
        tasks/12-21-23/utils/SafeArray.cpp
        tasks/12-21-23/task-01.cpp
        tasks/12-21-23/utils/Test.cpp
)

# Project for tic tac toe
# Include directories for the project
include_directories(projects/tic-tac-toe)

add_executable(projects_tic_tac_toe
projects/tic-tac-toe/main.cpp
projects/tic-tac-toe/spielfeld.cpp
        projects/tic-tac-toe/utils/validation.cpp
        projects/tic-tac-toe/utils/validation.h
        projects/tic-tac-toe/utils/player.cpp
        projects/tic-tac-toe/utils/player.h
)