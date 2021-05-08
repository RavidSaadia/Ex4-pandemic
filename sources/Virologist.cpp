//
// Created by ravid on 02/05/2021.
//
#include "Virologist.hpp"

using namespace pandemic;
using namespace std;

Virologist::Virologist(Board &board, City city) : pandemic::Player(board, city) {

}

Virologist &Virologist::treat(City city) {
    Color city_color = _p_board.get_city_color(city);
    if (_p_board.getCitiesDisease()[city] == 0) {
        throw invalid_argument("there isn`t any diseases cube on the city!");
    }
    if (!_cards[city] && _p_city !=city) {
        throw invalid_argument("you dont have the city card!!");
    }
 // if the Virologist arn`t in the city, she drop the city`s card.
        _cards[city] = false;
        _colors_counter[city_color]--;

    if (_p_board.there_is_cured(city_color)) {
        _p_board.setCitiesDisease(city, 0);
    } else {
        _p_board.getCitiesDisease()[city]--;
    }
    return *this;
}

string Virologist::role() const {
    return "Virologist";
}