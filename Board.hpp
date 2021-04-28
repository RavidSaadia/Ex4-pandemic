//
// Created by ravid on 27/04/2021.
//

#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP


#include <ostream>
#include "City.hpp"
#include "Color.hpp"
#include <array>
#include <unordered_map>
#include <unordered_set>
using namespace pandemic;
using namespace std;

class Board {

private:
    unordered_map<City,Color> _cities_colors;
    unordered_map<City,int> _cities_deasees;
    unordered_map<City,unordered_set<City>> _cities_connection;



public:

    int &operator[](City city);

    friend std::ostream &operator<<(std::ostream &os, Board board);

};


#endif //UNTITLED_BOARD_HPP
