//
// Created by ravid on 27/04/2021.
//
#ifndef UNTITLED_OPERATIONSEXPERT_HPP
#define UNTITLED_OPERATIONSEXPERT_HPP
#include "Player.hpp"

class OperationsExpert:public Player{

public:
    OperationsExpert(Board,City);
    void build() {

    }

    void fly_direct(City city);


    void treat(City city);

    void fly_charter(City city);

    void fly_shuttle(City city);
};

void OperationsExpert::fly_direct(City city) {

}

void OperationsExpert::treat(City city) {

}

void OperationsExpert::fly_charter(City city) {

}

void OperationsExpert::fly_shuttle(City city) {

}


#endif //UNTITLED_OPERATIONSEXPERT_HPP
