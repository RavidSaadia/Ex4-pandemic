//
// Created by ravid on 29/04/2021.
//



#include "Player.hpp"

using namespace pandemic;

Player::Player(Board &b, City c) : _p_board(b), _p_city(c) {}

Player &Player::drive(City city) {
    if (!_p_board.is_connected(_p_city, city)) {
        throw invalid_argument("the cities  are not connected!");
    }

    _p_city = city;
    return *this;
}

Player &Player::fly_direct(City city) {
    if (!_cards[city]) {
        throw invalid_argument("you dont have the city card!");
    }
    Color city_color = _p_board.get_city_color(city);
    _cards[city] = false;
    _colors_counter[city_color]--;
    _p_city = city;
    return *this;
}

Player &Player::fly_charter(City city) {
    if (!_cards[_p_city]) {
        throw invalid_argument("you dont have your city card!");
    }
    Color city_color = _p_board.get_city_color(_p_city);
    _p_city = city;
    _cards[_p_city] = false;
    _colors_counter[city_color]--;

    return *this;
}

Player &Player::fly_shuttle(City city) {
    if (!_p_board.have_Research_Stations(_p_city)) {
        throw invalid_argument("you dont have a Research Stations in your city!");

    }
    if (!_p_board.have_Research_Stations(city)) {
        throw invalid_argument("the city you want to go to doesnt have a Research Stations!");
    }

    _p_city = city;
    return *this;

}

Player &Player::build() {
    if (!_cards[_p_city]) {
        throw invalid_argument("you dont have the city card!");
    }
    if (!_p_board.have_Research_Stations(_p_city)) {     //if there was`nt a station before
        Color city_color = _p_board.get_city_color(_p_city);
        _colors_counter[city_color]--;
        _cards[_p_city] = false;     //remove the city card from the player hand

        _p_board.setResearchStations(_p_city, true);  //build
    }
    return *this;
}

Player &Player::discover_cure(Color color) {

    if (_p_board.there_is_cured(color)) {// if the cure is already found do nothing.
        return *this;
    } else if (!_p_board.have_Research_Stations(_p_city)) {//check if there is a station in the city.
        throw invalid_argument("you dont have a Research Stations in your city!");

    } else if (_colors_counter[color] < 5) { //check if there is less than 5 cards in the required color.
        throw invalid_argument("you dont have 5 cards in the required color!");
    }
    size_t counter = 0;
    for (auto[card, have]:_cards) { // if there is, put theme down.

        Color city_color = _p_board.get_city_color(card);
        if (city_color == color && have) { // check if the card is exist and it`s the correct color.
            have = false;// put the card down.
            counter++;
        }
        if (counter >= 5) {
            break;
        }
    }
    _colors_counter[color] -= 5;
    _p_board.found_cure(color);// add to the cure cities.


    return *this;
}

Player &Player::treat(City city) {
    Color city_color = _p_board.get_city_color(city);
    if (_p_city != city){
        throw invalid_argument("you cant cure city that you arn`t in it!");
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

Player &Player::take_card(City city) {
    Color city_color = _p_board.get_city_color(city);
    if (!_cards[city]) {
        _colors_counter[city_color]++;
    }

    _cards[city] = true;

    return *this;
}


