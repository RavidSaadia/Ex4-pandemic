//
// Created by ravid on 02/05/2021.
//
#include "Virologist.hpp"
using namespace pandemic;
using namespace std;
Virologist::Virologist(Board &board, City city) : pandemic::Player(board, city){

}

string Virologist::role() const {
    return "Virologist";
}