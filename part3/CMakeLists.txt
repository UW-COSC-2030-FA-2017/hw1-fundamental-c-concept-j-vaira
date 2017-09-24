cmake_minimum_required(VERSION 3.6)
project(part3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp collection.cpp collection.h)
add_executable(part3 ${SOURCE_FILES})