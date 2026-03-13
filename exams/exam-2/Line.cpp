#include <cmath>
#include <tuple>
#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2)
{
    pt1 = new Point{x1, y1};
    pt2 = new Point{x2, y2};
}

Line::~Line()
{
    delete pt1;
    delete pt2;
}

