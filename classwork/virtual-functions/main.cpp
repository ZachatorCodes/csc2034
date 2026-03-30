// #include "Animal.h" (not needed because Cat.h includes Animal.h)
#include "Cat.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Hello, from virtual-functions!\n";

    Animal* anim = new Animal("Billy", "Orange", 3.2);
    Cat* cat1 = new Cat("Tabby", "Orange", 25.4, 4.5);
}
