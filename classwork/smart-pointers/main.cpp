#include "Person.h"
#include <array>
#include <vector>

// Works with smart pointer
void printPerson(std::unique_ptr<Person> person)
{
    std::cout << *person;
}

// Works with raw pointer
void printPerson(Person* person)
{
    std::cout << *person;
}

int main(int, char**)
{
    // NOT the prefered way
    std::unique_ptr<Person> tom{new Person("Tom", 25)};

    // Prefered way
    auto mary{std::make_unique<Person>("Mary", 30)};

    // Pointer is MOVED to printPerson() and "tom" is now empty (ownership transferred)
    printPerson(std::move(tom));

    // Getting the raw pointer
    printPerson(mary.get());

    auto maryAddr = std::make_unique<Address>("123 Main St", "Anytown", "CA");
    mary->setAddress(std::move(maryAddr)); // overloads -> to use unique_ptr version of setAddress

    std::cout << "End of Program" << std::endl;
}
