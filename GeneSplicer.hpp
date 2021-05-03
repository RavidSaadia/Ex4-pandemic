//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_GENESPLICER_HPP
#define UNTITLED_GENESPLICER_HPP
#pragma once

#include "Player.hpp"

namespace pandemic {
    class GeneSplicer : public Player {
    public:

        GeneSplicer(Board &board, City city);

        virtual std::string role() const override;

        virtual Player &discover_cure(Color color) override;

    };

#endif //UNTITLED_GENESPLICER_HPP
}