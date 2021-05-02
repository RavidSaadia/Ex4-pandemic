//
// Created by ravid on 02/05/2021.
//
#include "Player.hpp"
#include "OperationsExpert.hpp"

using namespace pandemic;
using namespace std;

OperationsExpert::OperationsExpert(Board &board, City city) : Player(board, city) {

}

string OperationsExpert::role() const {
    return "OperationsExpert";
}

Player &OperationsExpert::build() {
    _p_board.build_s(_p_city);
    return *this;
}

