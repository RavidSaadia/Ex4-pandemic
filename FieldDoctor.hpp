//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_FIELDDOCTOR_HPP
#define UNTITLED_FIELDDOCTOR_HPP
#pragma once

#include "Player.hpp"
namespace pandemic {
    class FieldDoctor : public Player {


    public:

        FieldDoctor(Board &board, City city);

         std::string role() const override;
        Player &treat(City city) override;


    };
}
#endif //UNTITLED_FIELDDOCTOR_HPP
