#include <vector>
#include "Inventory.h"

Inventory::Inventory()
{
    cars = new std::vector<Car *>; // new gives pointer (no star needed on cars)
}

Inventory::~Inventory()
{
    auto it = cars->begin(); // cars points to the vector, get the beginning of the list using std library
    // auto it = (*cars).begin();
    // ^^ it is short for iterator

    while (it != cars->end())
    {
        delete *it; // delete auto dereferences (same as ** kind of)
        it++;
    }
}