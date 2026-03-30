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