cmake_minimum_required(VERSION 3.16)

project(notatki)

include_directories(include)

add_executable(notatki src/main.cpp src/note.cpp)