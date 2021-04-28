//
// Created by ravid on 27/04/2021.
//

#include <fstream>
#include "Board.hpp"

std::ostream &operator<<(std::ostream &os, Board board) {


    return os;
}

Board Board{

};

void set_board_map() {
    ifstream cities_map_file{"cities_map"};
    string line;
    string city;
    string color;
    for (int i = 0; i < 48; ++i) {
        cities_map_file>>city;
        cities_map_file>>color;
        City s = city;
        while (cities_map_file.peek() != '\n'){


        }

    }


    while (getline(cities_map_file, line)) {
city = line.substr(0,line.find_first_of(' '));


    }


}

int &Board::operator[](City city) {

}
