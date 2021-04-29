//
// Created by ravid on 29/04/2021.
//

#include "Player.hpp"


Player &Player::take_card(City city) {
    return *this;
}

Player& Player::discover_cure(Color color) {
    return *this;
}

string Player::role() {
    return this->_role;
}

std::ostream &pandemic::operator<<(std::ostream &os, Player p ) {
    return os;
}

Player& Player::drive(City city) {

    return *this;
}

Player &Player::fly_charter(City city) {
    return *this;
}

Player &Player::treat(City city) {
    return *this;
}

Player &Player::fly_direct(City city) {
    return *this;
}

