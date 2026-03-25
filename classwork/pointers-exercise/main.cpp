#include <iostream>
#include "Inventory.h"

int main(int, char **)
{
    std::cout << "Hello, from pointers-exercise!\n";

    Inventory *dealerStock = new Inventory();

    Car *gmc = new Car{"GMC", "Sierra", "GMCSIERRA1234"};
}
