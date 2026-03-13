#include <iostream>
#include "Line.h"

int main(int, char**){
    std::cout << "Hello, from Exam2!\n";

    // Create a new line
    Line* line1 = new Line{2,3,5,6};

    // Copy the line to create another line with the same point coordinates
    Line line2{*line1};

    // Change the x and y coordinates on one of the points in the original line.
    line1->getPt1()->setX(34);
    line1->getPt1()->setY(44);

    // Print out line 2
    std::cout << "Line2: " << line2 << std::endl;

    // Find the length of the segment between the two points on line 2.
    std::cout << "Length of Segment in Line2: " << line2.segmentLength() << std::endl;

    // Create a new line (line3)
    Line line3{};
    // Assign coordinates from line2 to line3
    line3 = line2;

    // Change line 2 point 1 coordinates
    line2.getPt1()->setX(4);
    line2.getPt1()->setY(44);

    // Print line 2 and it's slope.
    std::cout << "Line2: " << line2 << " Slope: " << line2.slope() << std::endl;

    // shift the line up 2 along the y axis
    std::cout << "Line3 before shift: " << line3 << std::endl;
    Point offset{0,2};
    *(line3.getPt1()) + offset;
    *(line3.getPt2()) + offset;
    // Print line3 and it's slope
    std::cout << "Line3 after shift: " << line3 << " Slope: " << line3.slope() << std::endl;

}
