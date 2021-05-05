//
// Created by ravid on 29/04/2021.
//
#pragma once
#ifndef UNTITLED_DISPATCHER_HPP
#define UNTITLED_DISPATCHER_HPP
#include "Player.hpp"
namespace pandemic {
    class Dispatcher : public Player {

    public:
        Dispatcher(Board &board, City city);

         std::string role() const override;
        Dispatcher &fly_direct(City city) override;

    };
}

#endif //UNTITLED_DISPATCHER_HPP
