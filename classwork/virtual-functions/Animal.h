#pragma once
#include <iostream>
#include <string>

class Animal
{
    std::string m_name;
    std::string m_color;
    double m_weight;

  public:
    Animal();
    Animal(std::string name, std::string color, double weight);
    virtual ~Animal();
    std::string makeSound();
    virtual std::string makeProperSound(); // virtual means allowed to be overwritten by child classes
};