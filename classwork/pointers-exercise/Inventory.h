#pragma once
#include <vector> // goes above header file (convention, doesn't make a difference)
#include "Car.h"

// Whenever you use a pointer, you must use *
// All addresses are 8 bytes (on a 64-bit machine)

// RULE OF 3:
// The moment you need a destructor, you probably need an assignment operator, and a copy constructor, and an assignment overload

// Inventory is a pointer to a vector of pointers to cars | Car* (IS A POINTER)
class Inventory
{
    // std::vector<Car *> *cars;
    std::vector<Car *> *cars{nullptr}; // SAFER
    // No need to do nullptr if cars isn't a pointer to a vector

public:
    Inventory();  // constructor
    ~Inventory(); // destructor

    Inventory(Inventory &) = delete; // copy constructor (= delete means you cannot copy)
    // Inventory(Inventory &); copy constructor

    Inventory &operator=(Inventory &) = delete; // assignment overload (= delete means you cannot copy)
    // Inventory &operator=(Inventory &); assignment overload

    bool addToInventory(Car *car);
    bool removeFromInventory(Car *car);
    void clearInventory();
};