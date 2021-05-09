//
// Created by ravid on 29/04/2021.
//
#pragma once
#ifndef UNTITLED_RESEARCHER_HPP
#define UNTITLED_RESEARCHER_HPP

#include "Player.hpp"
namespace pandemic {
    class Researcher : public Player {

    public:

        Researcher(Board &board, City city);
        Researcher &discover_cure(Color color) override;

         static std::string role() ;


    };
}
#endif //UNTITLED_RESEARCHER_HPP
