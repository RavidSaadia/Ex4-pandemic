//
// Created by ravid on 02/05/2021.
//

#include "FieldDoctor.hpp"
using namespace pandemic;
using namespace std;
FieldDoctor::FieldDoctor(Board &board, City city) : Player(board, city){

}

string FieldDoctor::role() const {
    return "FieldDoctor";
}

