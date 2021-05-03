//
// Created by ravid on 27/04/2021.
//

#include <fstream>
#include "Board.hpp"
#include "Init_board.hpp"
using namespace pandemic;
using namespace std;
ostream &pandemic::operator<<(ostream &os, Board &board) {


    return os;
}




int &pandemic::Board::operator[](City city) {

    return _cities_disease.at(city);
}

bool Board::is_clean() {
    auto it = _cities_disease.begin();
    for (; it != _cities_disease.end(); ++it) {

        if (it->second > 0) { return false; }

    }

    return true;
}

bool Board::build_s(City city) {
    if (_research_stations.contains(city)) { return false; }
    else
        _research_stations[city] = true;
    return true;
}

Board::Board() {
init_cities_connection(_cities_connection);
init_colors(_cities_colors);
init_cities_disease(_cities_disease);
}

void Board::remove_cures() {

}

