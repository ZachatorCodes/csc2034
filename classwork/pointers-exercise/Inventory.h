#pragma once
#include <vector> // goes above header file (convention, doesn't make a difference)
#include "Car.h"

// Inventory is a pointer to a vector of pointers to cars | Car* (IS A POINTER)
// Whenever you use a pointer, you must use *
// All addresses are 8 bytes (on a 64-bit machine)

class Inventory
{
    std::vector<Car *> cars;
};