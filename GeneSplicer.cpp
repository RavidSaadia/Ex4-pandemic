//
// Created by ravid on 02/05/2021.
//
#include "GeneSplicer.hpp"

using namespace pandemic;
using namespace std;

GeneSplicer::GeneSplicer(Board &board, City city) : pandemic::Player(board, city) {

}

Player &GeneSplicer::discover_cure(Color color) {
    size_t cards_number = 0;
    for (auto[_, have]:_cards) {
        if (have) {
            cards_number++;
        }
    }
    if ( _p_board.getCureMap().contains(color)) {// if the cure is already found do nothing.
        return *this;
    } else if (_p_board.getResearchStations().contains(_p_city)//check if there is a station in the city.
               && cards_number >= 5) {               //check if there is 5 cards in the required color.
        size_t counter = 0;
        for (auto[_, have]:_cards) { // if there is, put theme down.
            if (have) { // check if the card is exist.
                have = false;//
                counter++;
            }
            if (counter >= 5){
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

string GeneSplicer::role() const {
    return "GeneSplicer";
}
