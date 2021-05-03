//
// Created by ravid on 02/05/2021.
//
#include "OperationsExpert.hpp"

using namespace pandemic;
using namespace std;

OperationsExpert::OperationsExpert(Board &board, City city) : Player(board, city) {
}

string OperationsExpert::role() const {
    return "OperationsExpert";
}

Player &OperationsExpert::build() {

    if (!_p_board.have_Research_Stations(_p_city)) {     //if there was`nt a station before
        _p_board.getResearchStations()[_p_city] = true;  //build
    }
    return *this;
}

