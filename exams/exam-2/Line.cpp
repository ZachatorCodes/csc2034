#include <cmath>
#include <tuple>
#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2)
{
    pt1 = new Point{x1, y1};
    pt2 = new Point{x2, y2};
}

Line::Line()
{
    pt1 = new Point{0, 0};
    pt2 = new Point{0, 0};
}

Line::~Line()
{
    delete pt1;
    delete pt2;
}

Line::Line(const Line &line)
{
    Line *newLine = new Line(line.pt1->getX(), line.pt1->getY(), line.pt2->getX(), line.pt2->getY());
}

Line &Line::operator=(Line &line)
{
    Line *newLine = new Line(line.pt1->getX(), line.pt1->getY(), line.pt2->getX(), line.pt2->getY());
    return *newLine;
}

Point *Line::getPt1()
{
    return pt1;
}

Point *Line::getPt2()
{
    return pt2;
}

double Line::slope()
{
    int p1X = this->getPt1()->getX();
    int p1Y = this->getPt1()->getY();
    int p2X = this->getPt2()->getX();
    int p2Y = this->getPt2()->getY();

    double slope = ((p2Y - p1Y) / (p2X - p1X));

    return slope;
}

double Line::segmentLength()
{
    int p1X = this->getPt1()->getX();
    int p1Y = this->getPt1()->getY();
    int p2X = this->getPt2()->getX();
    int p2Y = this->getPt2()->getY();

    double length = std::sqrt(std::pow((p2X - p1X), 2.0) + (std::pow((p2Y - p1Y), 2.0)));

    return length;
}

std::ostream &operator<<(std::ostream &out, const Line &line)
{
}

Point &operator+(Point p) {
}