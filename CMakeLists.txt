cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(DEMO1
        Demo1.cpp Board.cpp Board.hpp City.hpp
        Color.hpp OperationsExpert.hpp Player.cpp
        Player.hpp Researcher.hpp Scientist.hpp FieldDoctor.hpp
        GeneSplicer.hpp Dispatcher.hpp Medic.hpp Virologist.hpp
        Dispatcher.cpp FieldDoctor.cpp GeneSplicer.cpp Medic.cpp
        OperationsExpert.cpp Researcher.cpp Scientist.cpp Virologist.cpp Test.cpp Init_board.h)

add_executable(DEMO2
        Demo2.cpp doctest.h
        Board.cpp Board.hpp City.hpp
        Color.hpp OperationsExpert.hpp Player.cpp
        Player.hpp Researcher.hpp Scientist.hpp FieldDoctor.hpp
        GeneSplicer.hpp Dispatcher.hpp Medic.hpp Virologist.hpp
        Dispatcher.cpp FieldDoctor.cpp GeneSplicer.cpp Medic.cpp
        OperationsExpert.cpp Researcher.cpp Scientist.cpp Virologist.cpp Test.cpp)