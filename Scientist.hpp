//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_SCIENTIST_HPP
#define UNTITLED_SCIENTIST_HPP
#pragma once

#include "Player.hpp"
namespace pandemic {

    class Scientist : public Player {

    private:
        size_t _n;

    public:


        Scientist(Board &board, City city, size_t n);

        std::string role() const override;
        Player &discover_cure(Color color) override;


        int getN() const {
            return _n;
        }


    };

#endif //UNTITLED_SCIENTIST_HPP
}