#include <iostream>
#include "Shape.h"

Shape::Shape(std::string color, bool filled)
    : m_color(color)
    , m_isFilled(filled)
{

}

std::ostream& operator<<(std::ostream& out, Shape& shape){
    out << "Color: " << shape.m_color << "\nFilled: " << shape.m_isFilled << std::endl;
    return out;
}