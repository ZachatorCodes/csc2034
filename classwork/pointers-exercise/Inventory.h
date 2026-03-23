#pragma once
#include <vector> // goes above header file (convention, doesn't make a difference)
#include "Car.h"

// Whenever you use a pointer, you must use *
// All addresses are 8 bytes (on a 64-bit machine)

// The moment you need a destructor, you probably need an assignment operator

// Inventory is a pointer to a vector of pointers to cars | Car* (IS A POINTER)
class Inventory
{
    std::vector<Car *> *cars;

public:
    Inventory();
};