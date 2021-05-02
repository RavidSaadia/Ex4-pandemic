//
// Created by ravid on 29/04/2021.
//



#include "Player.hpp"


Player::Player(Board &b, City c) : _p_board(b), _p_city(c) {}

Player &Player::take_card(City city) {
    Color city_color = _p_board.getCitiesColors()[city];
    if (!_cards.contains(city)) {
        _colors_counter[city_color]++;
    }

    _cards[city] = true;

    return *this;
}

Player &Player::discover_cure(Color color) {

    if (_p_board.getCureMap().contains(color)) {// if the cure is already found do nothing.
        return *this;
    } else if (_p_board.getResearchStations().contains(_p_city)//check if there is a station in the city.
               && _colors_counter[color] >= 5) {               //check if there is 5 cards in the required color.
        size_t counter = 0;
        for (auto[card, have]:_cards) { // if there is, put theme down.

            Color city_color = _p_board.getCitiesColors()[card];
            if (city_color == color && have) { // check if the card is exist and it`s the correct color.
                have = false;//
                counter++;
            }
            if (counter >= 5) {
                break;
            }
        }
        _colors_counter[color] -= 5;
        _p_board.getCureMap().insert(color);
    } else {
        throw invalid_argument("the city should have a Research Stations "
                               "and you need 5 cards in the same color ");
    }

    return *this;
}


//std::ostream &pandemic::operator<<(std::ostream &os, Player p) {
//    return os;
//}

Player &Player::drive(City city) {

    return *this;
}

Player &Player::fly_charter(City city) {
    return *this;
}

Player &Player::treat(City city) {
    return *this;
}

Player &Player::fly_direct(City city) {
    return *this;
}

Player &Player::build() {
    if (_p_board.build_s(_p_city)) {     //if there was`nt a station before
        _cards[_p_city] = false;     //remove the city card from the player hand
    }
    return *this;
}

Player &Player::fly_shuttle(City city) {
    if (_p_board.getResearchStations().contains(_p_city)
        && _p_board.getResearchStations().contains(city)) {
        _p_city = city;
    } else {
        throw invalid_argument("Both cities should have a Research Station!");
    }
    return *this;

}

