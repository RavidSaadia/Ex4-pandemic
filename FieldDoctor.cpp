//
// Created by ravid on 02/05/2021.
//

#include "FieldDoctor.hpp"
using namespace pandemic;
using namespace std;
FieldDoctor::FieldDoctor(Board &board, City city) : pandemic::Player(board, city){

}

Player &FieldDoctor::treat(City city) {
    Color city_color = _p_board.get_city_color(city);
    if (!_p_board.is_connected(_p_city,city) && _p_city != city){
        throw invalid_argument("you cant cure city that you arn`t in it or connected to!");
    }
    if (_p_board.getCitiesDisease()[city] == 0){
        throw invalid_argument("there isn`t any diseases cube on the city!");
    }
    if (_p_board.there_is_cured(city_color)){
        _p_board.setCitiesDisease(city,0);
    }
    else{
        _p_board.getCitiesDisease()[city]--;
    }
    return *this;
}
string FieldDoctor::role() const {
    return "FieldDoctor";
}

