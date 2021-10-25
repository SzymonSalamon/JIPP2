cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(firstLibCall)

add_executable(firstLibCall main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/firstLib/include)

