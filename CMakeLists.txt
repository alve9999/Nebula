set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

cmake_minimum_required(VERSION 3.0.0)
project(Nebula VERSION 1.0.0)


find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Nebula src/main.cpp)
target_link_libraries(Nebula ${SDL2_LIBRARIES})