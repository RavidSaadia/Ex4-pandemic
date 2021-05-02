//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_MEDIC_HPP
#define UNTITLED_MEDIC_HPP

#include "Player.hpp"
namespace pandemic {
    class Medic : public Player {

    public:
        Medic(Board &board, City city);
        virtual std::string role() const override;

    };

#endif //UNTITLED_MEDIC_HPP
}