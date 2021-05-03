//
// Created by ravid on 02/05/2021.
#include "Dispatcher.hpp"
using namespace pandemic;
Dispatcher::Dispatcher(Board &board, City city) : pandemic::Player(board, city){

}

std::string Dispatcher::role() const {
    return "Dispatcher";
}

