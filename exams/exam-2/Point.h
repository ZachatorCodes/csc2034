#pragma once
#include <iostream>

class Point {
    int m_x{0};
    int m_y{0};

public:
    Point(int x, int y);
    ~Point();
    void setX(int val);
    void setY(int val);
    int getX();
    int getY();
};