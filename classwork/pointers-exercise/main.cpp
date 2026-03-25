#include "Inventory.h"
#include <iostream>

int main(int, char **)
{
    std::cout << "Hello, from pointers-exercise!\n";

    Inventory *dealerStock = new Inventory();
    Inventory d3{};
    d3 = *dealerStock;

    Car *gmc = new Car{"GMC", "Sierra", "GMCSIERRA1234"};
    dealerStock->addToInventory(gmc);
    // OR (*dealerStock).addToInventory(gmc);

    Car *toyota = new Car{"Toyota", "4Runner", "TOYOTA4RUNNER1234"};
    Car *honda = new Car{"Honda", "Accord", "HONDAACCORD1234"};
    dealerStock->addToInventory(toyota);
    (*dealerStock).addToInventory(honda);

    Inventory d2{*dealerStock};
    Inventory *dealerStock2 = &d2; // &d2 reads as address of d2

    std::cout << dealerStock;
    std::cout << dealerStock2;
}
