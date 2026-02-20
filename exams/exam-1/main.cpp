#include <iostream>
#include "median.cpp"
#include <algorithm>

int main(int, char **)
{
    // provide user with basic program functionality information
    std::cout << "----------------------------------------" << '\n'
              << "Welcome to the Zach's median finder application!" << '\n'
              << "You can enter as many positive numbers as you would like." << '\n'
              << "To end data collection, enter any negative number." << '\n'
              << "----------------------------------------" << std::endl;

    std::vector<double> nums{}; // initialize empty double vector
    collectData(nums);          // collect data method from median.cpp file

    std::sort(nums.begin(), nums.end()); // sort numbers from smallest to biggest
    printVector(nums);                   // print sorted numbers

    double median = findMedian(nums); // call function and store return value as median
    if (nums.size() > 0)              // print median value or that median DNE
    {
        std::cout << "Median: " << median;
    }
    else
    {
        std::cout << "Median DNE for an empty set.";
    }
    std::cout << std::endl;

    // print ending statement
    std::cout << "----------------------------------------" << '\n'
              << "Thank you for using the program." << '\n'
              << "Goodbye!" << '\n'
              << "----------------------------------------" << std::endl;
}
