cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

add_executable(matrixApp main.cpp)

include_directories(../matrixLib/include)

target_link_libraries(matrixApp madLib)

