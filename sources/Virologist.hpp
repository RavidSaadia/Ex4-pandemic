//
// Created by ravid on 29/04/2021.
//
#pragma once
#ifndef UNTITLED_VIROLOGIST_HPP
#define UNTITLED_VIROLOGIST_HPP

#include "Player.hpp"
namespace pandemic {
    class Virologist : public Player {

    public:

        Virologist(Board &board, City city);

         std::string role() const ;
        Virologist &treat(City city) override;


    };
}
#endif //UNTITLED_VIROLOGIST_HPP
