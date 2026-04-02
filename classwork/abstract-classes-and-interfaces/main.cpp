#include "Bike.h"
#include "Car.h"
#include "Vehicle.h"
#include "IRepairable.h"

#include <iostream>

void repairAnything(IRepairable& broken) {
    std::cout << broken.repairIt() << std::endl;
}

int main( int, char** )
{
    std::cout << "Hello World!" << std::endl;

    // Can't make object of abstract class
    // Vehicle vehicle1{};
    // std::cout << "Move vehicle: " << vehicle1.move() << std::endl;

    Car car1{};
    std::cout << "Move car: " << car1.move() << std::endl;

    Bike bike1{};
    std::cout << "Move bike: " << bike1.move() << std::endl;

    IRepairable& car2{car1};
    std::cout << "Repair car: " << car2.repairIt() << std::endl;

    IRepairable* bike2 = new Bike();
    std::cout << "Repair bike: " << bike2->repairIt() << std::endl;


    repairAnything(*bike2);
    return 0;
}


