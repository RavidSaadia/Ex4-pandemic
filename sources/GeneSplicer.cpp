//
// Created by ravid on 02/05/2021.
//
#include "GeneSplicer.hpp"
using namespace pandemic;
using namespace std;
const int FIVE_CARDS = 5;

GeneSplicer::GeneSplicer(Board &board, City city) : pandemic::Player(board, city) {

}

GeneSplicer &GeneSplicer::discover_cure(Color color) {

    if (_p_board.there_is_cured(color)) {// if the cure is already found do nothing.
        return *this;
    }
    if (!_p_board.have_Research_Stations(_p_city)) {//check if there is a station in the city.
        throw invalid_argument("you dont have a Research Stations in your city!");

    }
    if (sum_of_cards(_colors_counter) < FIVE_CARDS) { //check if there is less than 5 cards.
        throw invalid_argument("you have less than 5 cards!");
    }
    size_t counter = 0;
    for (auto[card, have]:_cards) { // if there is, put theme down.

        Color card_color = _p_board.get_city_color(card);
        if (have) { // check if the card is exist.
            _cards[card] = false;// put the card down.
            counter++;
            _colors_counter[card_color]--;
        }
        if (counter >= FIVE_CARDS) {
            break;
        }
    }
    _p_board.found_cure(color);// add to the cured cities.

    return *this;
}

string GeneSplicer::role() {
    return "GeneSplicer";
}

size_t GeneSplicer::sum_of_cards(unordered_map<Color, size_t> map) {
    size_t sum = map[Color::Black] + map[Color::Blue] + map[Color::Red] + map[Color::Yellow];
    return sum;
}

