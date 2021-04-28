cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        Demo2.cpp
        Demo1.cpp Board.cpp Board.hpp City.hpp Color.cpp Color.hpp OperationsExpert.cpp OperationsExpert.hpp)

