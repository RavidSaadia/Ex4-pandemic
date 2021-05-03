//
// Created by ravid on 02/05/2021.
//


#include "Scientist.hpp"
using namespace pandemic;
using namespace std;
Scientist::Scientist(Board &board, City city,int n) : pandemic::Player(board, city), _n(n){

}


string Scientist::role() const {
    return "Scientist";
}