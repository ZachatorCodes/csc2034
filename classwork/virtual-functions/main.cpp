#include "Animal.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Hello, from virtual-functions!\n";

    Animal* anim = new Animal("Billy", "Orange", 3.2);
}
