//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_PLAYER_HPP
#define UNTITLED_PLAYER_HPP

#pragma once

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {

    class Player {
    protected:
        Board _p_board;
        City _p_city;
        unordered_map<City, bool> _cards;
        unordered_map<Color, std::size_t> _colors_counter;

    public:

        Player(Board &board, City city);

        Player &take_card(City city);

        virtual Player &build();
        virtual Player &fly_shuttle(City city);

        virtual Player &discover_cure(Color color);

        virtual std::string role() const = 0;

//        friend std::ostream &operator<<(std::ostream &, Player player);

        virtual Player &drive(City city);

        virtual Player &fly_charter(City city);

        virtual Player &treat(City city);

        virtual Player &fly_direct(City city);
    };

}
#endif //UNTITLED_PLAYER_HPP
