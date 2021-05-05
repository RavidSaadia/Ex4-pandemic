//
// Created by ravid on 27/04/2021.
//
#ifndef UNTITLED_OPERATIONSEXPERT_HPP
#define UNTITLED_OPERATIONSEXPERT_HPP
#pragma once
#include "Player.hpp"

namespace pandemic {
    class OperationsExpert : public Player {

    public:
        OperationsExpert(Board &b, City c);

         std::string role() const override;

        OperationsExpert &build() override;
    };

}
#endif //UNTITLED_OPERATIONSEXPERT_HPP
