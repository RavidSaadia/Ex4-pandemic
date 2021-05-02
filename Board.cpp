//
// Created by ravid on 27/04/2021.
//

#include <fstream>
#include "Board.hpp"

std::ostream &operator<<(std::ostream &os, Board board) {


    return os;
}

Board Board() {};

void set_board_map() {
    ifstream cities_map_file{"cities_map"};
    string line;
    string city;
    string color;
    for (int i = 0; i < 48; ++i) {
        cities_map_file >> city;
        cities_map_file >> color;
        while (cities_map_file.peek() != '\n') {


        }

    }


    while (getline(cities_map_file, line)) {
        city = line.substr(0, line.find_first_of(' '));


    }


}

int &Board::operator[](City city) {

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

