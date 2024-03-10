cmake_minimum_required(VERSION 3.26)
project(project2)

set(CMAKE_CXX_STANDARD 11)

add_executable(project2 Main/main.cpp
        Commercial/Commercial.cpp
        Industrial/Industrial.cpp
        Residential/Residential.cpp
        Main/Cell.h)
