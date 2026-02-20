#include <iostream>
#include <vector>

// Function Prototypes
void collectData();
void findMedian();

// Function Definitions
void collectData(std::vector<double> &nums)
{
    double userNum;
    int counter = 0;
    do
    {
        std::cout << "Please enter a number: ";
        std::cin >> userNum;
        if (userNum > -1)
        {
            nums.resize(nums.size() + 1);
            nums[counter] = userNum;
            counter++;
        }
    } while (userNum > -1);
}