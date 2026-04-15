#include "Rectangle.h"

Rectangle::Rectangle(std::string color, bool isFilled, int length, int breadth)
    : Quadrilateral{color, isFilled}, m_length(length), m_breadth(breadth)
{
}

int Rectangle::getArea()
{
    return m_length * m_breadth;
}

// static_cast here calls the parent's overloaded operator (goes all the way to shape)
std::ostream& operator<<(std::ostream& out, Rectangle& rectangle)
{
    return out << static_cast<Shape&>(rectangle) << "Length: " << rectangle.m_length
               << "\nBreadth: " << rectangle.m_breadth;
}