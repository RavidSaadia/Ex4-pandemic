//
// Created by ravid on 27/04/2021.
//
#ifndef UNTITLED_OPERATIONSEXPERT_HPP
#define UNTITLED_OPERATIONSEXPERT_HPP
#include "Player.hpp"
using namespace pandemic;
    class OperationsExpert : public Player {

    public:
        OperationsExpert(Board &b,City c);

        virtual std::string role() const override;

        Player &build();
    };


#endif //UNTITLED_OPERATIONSEXPERT_HPP
