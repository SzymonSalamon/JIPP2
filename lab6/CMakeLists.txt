cmake_minimum_required(VERSION 3.16)

project(wektor)

include_directories(include)

add_executable(wektor src/main.cpp src/wektor.cpp src/triangle.cpp)