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

         std::string role() const override;

         Player &discover_cure(Color color) override;

        static size_t sum_of_cards(unordered_map<Color, size_t> map);
    };

#endif //UNTITLED_GENESPLICER_HPP
}