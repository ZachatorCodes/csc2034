#include "Person.h"
#include <array>
#include <memory> // needed for smart pointers
#include <vector>

int main(int, char**)
{
    // It is important to look at the lifetime of your data
    // Use these to avoid C-style arrays
    std::array<int, 5> arr{1, 2, 3, 4, 5};
    std::vector<int> vec{1, 2, 3, 4, 5};

    // NOT the prefered way
    std::unique_ptr<Person> tom{new Person("Tom", 25)};

    // Prefered way
    auto mary{std::make_unique<Person>("Mary", 30)};
}
