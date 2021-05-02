//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_RESEARCHER_HPP
#define UNTITLED_RESEARCHER_HPP

#include "Player.hpp"
namespace pandemic {
    class Researcher : public Player {

    public:

        Researcher(Board &board, City city);

        virtual std::string role() const override;


    };

#endif //UNTITLED_RESEARCHER_HPP
}