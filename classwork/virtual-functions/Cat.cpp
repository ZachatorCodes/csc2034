#include "Cat.h"

Cat::Cat()
{
    m_whiskerLength = 1.0;
}

Cat::Cat(std::string name, std::string color, double weight, double whiskerLength)
    : Animal(name, color, weight), m_whiskerLength(whiskerLength) // initializer list
{
}

Cat::~Cat()
{
    std::cout << "Deleting cat aliases" << std::endl;
    delete catAliases;
}

double Cat::getWhiskerLength() const
{
    return m_whiskerLength;
}

std::string Cat::makeSound()
{
    return "Meow Meow";
}

std::string Cat::makeProperSound()
{
    return "Mew Mew";
}