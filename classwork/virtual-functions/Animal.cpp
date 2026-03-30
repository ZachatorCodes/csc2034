#include "Animal.h"

Animal::Animal()
{
    this->m_name = "No Name";
    m_color = "No Color";
    m_weight = 1.0;
}

Animal::Animal(std::string name, std::string color, double weight) : m_name(name), m_color(color), m_weight(weight)
{
}

std::string Animal::makeSound()
{
    return "Blah Blah";
}

std::string Animal::makeProperSound()
{
    return "Blah Blah";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}