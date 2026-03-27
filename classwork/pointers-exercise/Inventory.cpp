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
    clearInventory();
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
    // // OPTION 1
    // auto it = cars->begin();

    // // this deletes the car but keeps the pointer
    // while (it != cars->end())
    // {
    //     delete *it;
    //     it++;
    // }

    // // clears the array of pointers
    // while (!cars->empty())
    // {
    //     cars->pop_back();
    // }

    // Don't use an iterator and try to erase at the same time, it will miss the data

    // OPTION 2
    // auto it = cars->end(); // one after the last element
    // it--;
    // while (it != cars->begin())
    // {
    //     delete *it;
    //     cars->erase(it);
    //     it--;
    // }
    // delete *it;      // for first element
    // cars->erase(it); // for first element

    // Option 3;
    auto it = cars->end();
    it--;
    while (!cars->empty())
    {
        delete *it;
        cars->pop_back();
        it--;
    }

    std::cout << "**Inventory Cleared**" << std::endl;
    std::cout << "Size of inventory: " << cars->size() << std::endl;
}

bool Inventory::removeFromInventory(Car* car)
{
    auto it = cars->begin();
    while (it != cars->end())
    {
        if ((*it)->getVin() == car->getVin())
        {
            delete *it;
            cars->erase(it);
            return true;
        }
        it++;
    }
    return false;
}