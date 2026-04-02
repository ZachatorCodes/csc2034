#include "Bike.h"

Bike::Bike(){}

std::string Bike::move() {
    // return "Pedal it!";
    return Vehicle::move();
}

std::string Bike::repairIt() {
    return "Tune up!";
}