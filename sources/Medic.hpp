//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_MEDIC_HPP
#define UNTITLED_MEDIC_HPP
#pragma once

#include "Player.hpp"
namespace pandemic {
    class Medic : public Player {

    public:
        Medic(Board &board, City city);
         std::string role() const ;
        Medic &treat(City city) override;
        Medic &drive(City city) override;
        Medic &fly_direct(City city) override;
        Medic &fly_charter(City city) override;
        Medic &fly_shuttle(City city) override;


    };

#endif //UNTITLED_MEDIC_HPP
}