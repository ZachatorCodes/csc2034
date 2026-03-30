#pragma once
#include <string>

class Animal
{
    std::string m_name;
    std::string m_color;
    double weight;

  public:
    Animal();
    Animal(std::string name, std::string color, double weight);
};