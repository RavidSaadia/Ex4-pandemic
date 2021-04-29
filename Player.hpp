//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_PLAYER_HPP
#define UNTITLED_PLAYER_HPP


#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {

    class Player {


    public:
        Player();

        Player &take_card(City city);

        void discover_cure(Color color);

        Player &role();

        friend std::ostream &operator<<(std::ostream, Player);

        void drive(City city);
    };

}
#endif //UNTITLED_PLAYER_HPP
