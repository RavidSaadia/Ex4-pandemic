//
// Created by ravid on 02/05/2021.
#include "Medic.hpp"
using namespace pandemic;
Medic::Medic(Board &board, City city) : pandemic::Player(board, city){
    if (_p_board.there_is_cured(_p_board.get_city_color(city))) {
        _p_board.setCitiesDisease(_p_city,0);// treat Automatically as a Medic if there is a cure.
    }
}
Medic &Medic::drive(City city) {
   Player::drive(city);
    if (_p_board.there_is_cured(_p_board.get_city_color(city))) {
        _p_board.setCitiesDisease(_p_city,0);// treat Automatically as a Medic if there is a cure.
    }
   return *this;
}

Medic &Medic::fly_direct(City city) {
    Player::fly_direct(city);
    if (_p_board.there_is_cured(_p_board.get_city_color(city))) {
        _p_board.setCitiesDisease(_p_city,0);// treat Automatically as a Medic if there is a cure.
    }
    return *this;
}

Medic &Medic::fly_charter(City city) {
    Player::fly_charter(city);
    if (_p_board.there_is_cured(_p_board.get_city_color(city))) {
        _p_board.setCitiesDisease(_p_city,0);// treat Automatically as a Medic if there is a cure.
    }
    return *this;
}

Medic &Medic::fly_shuttle(City city) {
    Player::fly_shuttle(city);
    if (_p_board.there_is_cured(_p_board.get_city_color(city))) {
        _p_board.setCitiesDisease(_p_city,0);// treat Automatically as a Medic if there is a cure.
    }
    return *this;

}
Medic  &Medic::treat(City city) {
//    Color city_color = _p_board.get_city_color(city);
    if (_p_city != city){
        throw invalid_argument("you cant cure city that you arn`t in it!");
    }
    if (_p_board.getCitiesDisease()[city] == 0){
        throw invalid_argument("there isn`t any diseases cube on the city!");
    }

    else{
        _p_board.setCitiesDisease(city,0);
    }
    return *this;
}

std::string Medic::role() const {
    return "Medic";
}

