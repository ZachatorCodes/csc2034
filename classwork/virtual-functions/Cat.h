#pragma once
#include "Animal.h"
#include <string>

class Cat : public Animal
{
    double m_whiskerLength{2.0}; // better way to initialize

  public:
    Cat(std::string name, std::string color, double weight, double whiskerLength);
};