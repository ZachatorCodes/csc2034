#pragma once

#include "Point.h"

class Line
{
    Point *pt1;
    Point *pt2;

public:
    Line(int x1, int y1, int x2, int y2);         // constructor
    Line();
    ~Line();                                      // destructor
    Line(const Line &other);                      // copy constructor
    Line &operator=(const Line &other);           // assignment constructor
    Point *getPt1();                              // returns pointer to point 1
    Point *getPt2();                              // returns pointer to point 2
    double calculateLength(Point *p1, Point *p2); // takes in two pointers to calculate length
    double calculateSlope(Point *p1, Point *p2);  // takes in two pointers to calculate slope
};