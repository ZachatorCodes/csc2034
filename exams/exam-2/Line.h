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
    Line &operator=(Line &line);                  // assignment constructor
    Point *getPt1();                              // returns pointer to point 1
    Point *getPt2();                              // returns pointer to point 2
    double segmentLength(); // takes in two pointers to calculate length
    double slope();  // takes in two pointers to calculate slope
    friend std::ostream &operator<<(std::ostream &out, const Line &line);

    // Did Not Finish:
    Point &operator+(Point p);
};