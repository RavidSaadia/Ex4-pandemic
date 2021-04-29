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

        std::string  _role;

    public:
        Player();

        Player &take_card(City city);

        Player& discover_cure(Color color);

        std::string role();

        friend std::ostream &operator<<(std::ostream&, Player);

        Player& drive(City city);

        Player &fly_charter(City city);

        Player &treat(City city);

        Player &fly_direct(City city);
    };

}
#endif //UNTITLED_PLAYER_HPP
