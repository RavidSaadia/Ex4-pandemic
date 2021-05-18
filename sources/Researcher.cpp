//
// Created by ravid on 02/05/2021.
//
#include "Researcher.hpp"

using namespace pandemic;
using namespace std;
const int cards_for_cure = 5;

Researcher::Researcher(Board &board, City city) : pandemic::Player(board, city) {

}


Researcher &Researcher::discover_cure(Color color) {

    if (_p_board.there_is_cured(color)) {// if the cure is already found do nothing.
        return *this;
    }
    if (_colors_counter[color] < cards_for_cure) { //check if there is less than 5 cards in the required color.
        throw invalid_argument("you dont have 5 cards in the required color!");
    }
    size_t number_of_cards_that_throwed = 0;
    for (auto[card, have]:_cards) { // if there is, put theme down.

        Color card_color = _p_board.get_city_color(card);
        if (card_color == color && have) { // check if the card is exist and it`s the correct color.
            _cards[card] = false;// put the card down.
            number_of_cards_that_throwed++;
            _colors_counter[color]--;

        }
        if (number_of_cards_that_throwed == cards_for_cure) {
            break;
        }
    }
    _p_board.found_cure(color);// add to the cure cities.


    return *this;
}

string Researcher::role() {
    return "Researcher";
}
