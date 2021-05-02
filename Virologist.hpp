//
// Created by ravid on 29/04/2021.
//

#ifndef UNTITLED_VIROLOGIST_HPP
#define UNTITLED_VIROLOGIST_HPP

#include "Player.hpp"
namespace pandemic {
    class Virologist : public Player {

    public:
        Virologist(Board, City);

        virtual std::string role() const override;


    };
}
#endif //UNTITLED_VIROLOGIST_HPP
