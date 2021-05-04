//
// Created by ravid on 02/05/2021.
#include "Dispatcher.hpp"
using namespace pandemic;
Dispatcher::Dispatcher(Board &board, City city) : pandemic::Player(board, city){

}
Player &Dispatcher::fly_direct(City city) {
    if (!_p_board.have_Research_Stations(_p_city)) {
        throw invalid_argument("you dont have Research Stations a in your city!");
    }
    _p_city = city;
    return *this;
}


std::string Dispatcher::role() const {
    return "Dispatcher";
}


