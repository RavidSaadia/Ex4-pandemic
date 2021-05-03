//
// Created by ravid on 02/05/2021.
#include "Medic.hpp"
using namespace pandemic;
Medic::Medic(Board &board, City city) : pandemic::Player(board, city){

}

std::string Medic::role() const {
    return "Medic";
}

