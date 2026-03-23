#include <iostream>
#include "Circle.h"
#include <cmath>

Circle::Circle(std::string color, bool filled, double radius)
    : Shape{color, filled}
    , m_radius(radius)
{}

double Circle::getArea() {
    return M_PI * m_radius * m_radius;
}

std::ostream& operator<<(std::ostream& out, Circle& circle){
    out << "Color: " << circle.getColor() 
        << "\nFilled: " << circle.m_isFilled 
        << "\nRadius: " << circle.m_radius 
        << std::endl;
    return out;
}