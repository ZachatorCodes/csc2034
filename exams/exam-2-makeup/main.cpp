#include "Person.h"
#include <iostream>

int main(int, char**)
{
    std::cout << "Hello, from Exam2Makeup!\n";

    Person* tom = new Person("Tom");
    tom->setAddress(new Address("345 29th St", "Denver", "CO"));

    Person jane{*tom};
    jane.setName("Jane");
    tom->getAddress().setCity("Grand Junction");

    std::cout << *tom << std::endl;
    std::cout << jane << std::endl;

    delete tom;

    Person fran = jane;
    fran.setName("Fran");
    fran.getAddress().setStreet("Pecos St");
    fran.getAddress().setCity("Juneau");
    fran.getAddress().setState("AK");

    std::cout << jane << std::endl;
    std::cout << fran << std::endl;
}
