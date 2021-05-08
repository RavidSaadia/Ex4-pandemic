//
// Created by ravid on 02/05/2021.
#include "Dispatcher.hpp"

using namespace pandemic;

Dispatcher::Dispatcher(Board &board, City city) : pandemic::Player(board, city) {

}

Dispatcher &Dispatcher::fly_direct(City city) {
    if (_p_board.have_Research_Stations(_p_city) ){
        _p_city = city;
        return *this;
    }

    if (!_cards[city]) {
        throw invalid_argument("you dont have Research Stations a in your city"
                               " and dont have the city card!");
    }

    _p_city = city;
    _cards[city] = false;
    _colors_counter[_p_board.get_city_color(city)]--;
    return *this;

}


std::string Dispatcher::role() const {
    return "Dispatcher";
}


