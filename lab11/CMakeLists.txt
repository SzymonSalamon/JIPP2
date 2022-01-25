cmake_minimum_required(VERSION 3.16)

project(csv)

include_directories(include)

add_executable(csv src/main.cpp src/csv.cpp)