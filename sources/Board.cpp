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

for(auto [_,disease]:_cities_disease){
        if (disease > 0) { return false; }

    }

    return true;
}



Board::Board() {
init_cities_connection(_cities_connection);
init_colors(_cities_colors);
init_cities_disease(_cities_disease);
    init_research_stations(_research_stations);
}
bool Board::is_connected(City city1,City city2){
    return _cities_connection[city1].contains(city2);

}

void Board::remove_cures() {
_cure_map.clear();
}

bool Board::have_Research_Stations(City city) {
    return _research_stations[city];
}



