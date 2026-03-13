#include "Point.h"

Point::Point(int x, int y)
    : m_x(x), m_y(y)
{
}

void Point::setX(int val)
{
    m_x = val;
}

void Point::setY(int val)
{
    m_y = val;
}

int Point::getX()
{
    return m_x;
}

int Point::getY()
{
    return m_y;
}