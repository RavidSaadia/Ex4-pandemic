//
// Created by ravid on 02/05/2021.
//


#include "Scientist.hpp"
using namespace pandemic;
using namespace std;
Scientist::Scientist(Board &board, City city,size_t n) : pandemic::Player(board, city), _n(n){
    if (n>5){
        throw invalid_argument("there is no point to set n > 5 !!");
    }

}


Scientist &Scientist::discover_cure(Color color) {

    if (_p_board.there_is_cured(color)) {// if the cure is already found do nothing.
        return *this;
    } else if (!_p_board.have_Research_Stations(_p_city)) {//check if there is a station in the city.
        throw invalid_argument("you dont have a Research Stations in your city!");

    } else if (_colors_counter[color] < _n) { //check if there is less than n cards in the required color.
        throw invalid_argument("you dont have enough cards in the required color!");
    }
    size_t number_of_cards_that_throwed = 0;
    for (auto[card, have]:_cards) { // if there is, put theme down.

        Color city_color = _p_board.get_city_color(card);
        if (city_color == color && have) { // check if the card is exist and it`s the correct color.
            _cards[card] = false;// put the card down.
            number_of_cards_that_throwed++;
        }
        if (number_of_cards_that_throwed >= _n) {
            break;
        }
    }
    _colors_counter[color] -= _n; // update the _colors_counter.
    _p_board.found_cure(color);// add to the cure cities.


    return *this;
}

string Scientist::role() const {
    return "Scientist";
}