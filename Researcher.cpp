//
// Created by ravid on 02/05/2021.
//
#include "Researcher.hpp"
using namespace pandemic;
using namespace std;
Researcher::Researcher(Board &board, City city) : pandemic::Player(board, city){

}

string Researcher::role() const {
    return "Researcher";
}
