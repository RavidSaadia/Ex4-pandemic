//
// Created by ravid on 02/05/2021.
//
#include "Researcher.hpp"

using namespace pandemic;
using namespace std;

Researcher::Researcher(Board &board, City city) : pandemic::Player(board, city) {

}


Researcher &Researcher::discover_cure(Color color) {

    if (_p_board.there_is_cured(color)) {// if the cure is already found do nothing.
        return *this;
    } else if (_colors_counter[color] < 5) { //check if there is less than 5 cards in the required color.
        throw invalid_argument("you dont have 5 cards in the required color!");
    }
    size_t counter = 0;
    for (auto[card, have]:_cards) { // if there is, put theme down.

        Color city_color = _p_board.get_city_color(card);
        if (city_color == color && have) { // check if the card is exist and it`s the correct color.
            _cards[card] = false;// put the card down.
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

string Researcher::role() const {
    return "Researcher";
}
