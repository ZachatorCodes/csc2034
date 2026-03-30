#pragma once
#include "Animal.h"

class Cat : public Animal // extends
{
    double m_whiskerLength{2.0}; // better way to initialize

  public:
    Cat(std::string name, std::string color, double weight, double whiskerLength);
    double getWhiskerLength() const; // does not modify data, good habit for getters
    std::string makeSound();
    std::string makeProperSound() override; // overrides virtual function
};