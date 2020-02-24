# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.10)

# project info
project(sortTDD)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Application is based on .cpp file only
add_executable(sort_t sort_t.cpp sort.cpp)

# run command on example file
add_custom_target(test COMMENT "Test sort functions"
                       COMMAND ./sort_t
                       DEPENDS sort_t)
