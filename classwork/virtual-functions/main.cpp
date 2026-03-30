// #include "Animal.h" (not needed because Cat.h includes Animal.h)
#include "Cat.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Hello, from virtual-functions!\n";

    Animal* anim = new Animal("Billy", "Orange", 3.2); // variable holds pointer to animal
    std::cout << anim->makeSound() << std::endl;

    Cat* cat1 = new Cat("Tabby", "Orange", 25.4, 4.5); // variable holds pointer to cat
    std::cout << cat1->makeSound() << std::endl;

    std::cout << dynamic_cast<Animal*>(cat1)->makeSound() << std::endl; // dynamic cast for pointers

    Animal* anim1 = cat1;
    std::cout << anim1->makeSound() << std::endl; // uses type casting and uses parent method
    std::cout << anim1->makeProperSound() << std::endl; // overrides
    std::cout << dynamic_cast<Cat*>(anim1)->getWhiskerLength() << std::endl;

}
