#include "Inventory.h"
#include <iostream>
#include <vector>

Inventory::Inventory()
{
    cars = new std::vector<Car*>; // new gives pointer (no star needed on cars)
}

Inventory::Inventory(Inventory& other) : Inventory()
{
    auto it = other.cars->begin();
    while (it != other.cars->end())
    {
        Car* car = new Car((*it)->getMake(), (*it)->getModel(), (*it)->getMake() + (*it)->getModel() + "9587");
        cars->push_back(car);
        it++;
    }
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

bool Inventory::addToInventory(Car* car)
{
    cars->push_back(car);
    return true;
}

std::ostream& operator<<(std::ostream& out, const Inventory* stock)
{
    auto it = stock->cars->begin();

    while (it != stock->cars->end())
    {
        out << (*it)->getMake() << " " << (*it)->getModel() << " " << (*it)->getVin() << std::endl;
        it++;
    }

    return out;
}

void Inventory::clearInventory()
{
    auto it = cars->begin();
    while (it != cars->end())
    {
        delete *it;
        it++;
    }
    std::cout << "**Inventory Cleared**" << std::endl;
}