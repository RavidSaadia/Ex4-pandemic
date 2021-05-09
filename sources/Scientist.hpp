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
        int _n;

    public:


        Scientist(Board &board, City city, int n);

        static std::string role() ;
        Scientist &discover_cure(Color color) override;


        int getN() const {
            return _n;
        }


    };

#endif //UNTITLED_SCIENTIST_HPP
}