#pragma once

#include <iostream>
#include <string>
#include <vector>

class Shape
{
    std::string m_color;
    double m_area;

  public:
    Shape()
        : m_color( "" )
        , m_area( 0 )
    {
    }
    Shape( std::string color, double area )
        : m_color( color )
        , m_area( area )
    {
    }
    // ~Shape();

    double getArea() const { return m_area; }

    friend std::ostream& operator<<( std::ostream& out, const Shape& s );
    // bool operator<( const Shape& other ) const;
};

struct ShapeCompare
{
    bool operator()( const Shape& s1, const Shape& s2 ) const
    {
        return s1.getArea() < s2.getArea();
    }
};

std::ostream& operator<<( std::ostream& out, const Shape& s )
{
    out << "(" << s.m_color << ", " << s.m_area << ")";
    return out;
}
