cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(DEMO1 sources/Dispatcher.cpp sources/Dispatcher.hpp
        Demo1.cpp sources/Board.cpp sources/Board.hpp sources/City.hpp
        sources/Color.hpp sources/OperationsExpert.hpp sources/Player.cpp
        sources/Player.hpp sources/Researcher.hpp sources/Scientist.hpp sources/FieldDoctor.hpp
        sources/GeneSplicer.hpp  sources/Medic.hpp sources/Virologist.hpp
        sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/GeneSplicer.cpp sources/Medic.cpp
        sources/OperationsExpert.cpp sources/Researcher.cpp sources/Scientist.cpp sources/Virologist.cpp
        sources/Init_board.hpp )

add_executable(DEMO2
        Demo2.cpp sources/Dispatcher.cpp sources/Dispatcher.hpp
        Demo1.cpp sources/Board.cpp sources/Board.hpp sources/City.hpp
        sources/Color.hpp sources/OperationsExpert.hpp sources/Player.cpp
        sources/Player.hpp sources/Researcher.hpp sources/Scientist.hpp sources/FieldDoctor.hpp
        sources/GeneSplicer.hpp  sources/Medic.hpp sources/Virologist.hpp
        sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/GeneSplicer.cpp sources/Medic.cpp
        sources/OperationsExpert.cpp sources/Researcher.cpp sources/Scientist.cpp sources/Virologist.cpp
        sources/Init_board.hpp )

add_executable(TEST1 StudentTest1.cpp doctest.h TestRunner.cpp
        sources/Dispatcher.cpp sources/Dispatcher.hpp
        sources/Board.cpp sources/Board.hpp sources/City.hpp
        sources/Color.hpp sources/OperationsExpert.hpp sources/Player.cpp
        sources/Player.hpp sources/Researcher.hpp sources/Scientist.hpp sources/FieldDoctor.hpp
        sources/GeneSplicer.hpp  sources/Medic.hpp sources/Virologist.hpp
        sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/GeneSplicer.cpp sources/Medic.cpp
        sources/OperationsExpert.cpp sources/Researcher.cpp sources/Scientist.cpp sources/Virologist.cpp
        sources/Init_board.hpp )

add_executable(TEST2 StudentTest2.cpp  doctest.h TestRunner.cpp
        sources/Dispatcher.cpp sources/Dispatcher.hpp
        sources/Board.cpp sources/Board.hpp sources/City.hpp
        sources/Color.hpp sources/OperationsExpert.hpp sources/Player.cpp
        sources/Player.hpp sources/Researcher.hpp sources/Scientist.hpp sources/FieldDoctor.hpp
        sources/GeneSplicer.hpp  sources/Medic.hpp sources/Virologist.hpp
        sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/GeneSplicer.cpp sources/Medic.cpp
        sources/OperationsExpert.cpp sources/Researcher.cpp sources/Scientist.cpp sources/Virologist.cpp
        sources/Init_board.hpp )

add_executable(TEST3  StudentTest3.cpp doctest.h TestRunner.cpp
        sources/Dispatcher.cpp sources/Dispatcher.hpp
        sources/Board.cpp sources/Board.hpp sources/City.hpp
        sources/Color.hpp sources/OperationsExpert.hpp sources/Player.cpp
        sources/Player.hpp sources/Researcher.hpp sources/Scientist.hpp sources/FieldDoctor.hpp
        sources/GeneSplicer.hpp  sources/Medic.hpp sources/Virologist.hpp
        sources/Dispatcher.cpp sources/FieldDoctor.cpp sources/GeneSplicer.cpp sources/Medic.cpp
        sources/OperationsExpert.cpp sources/Researcher.cpp sources/Scientist.cpp sources/Virologist.cpp
        sources/Init_board.hpp )