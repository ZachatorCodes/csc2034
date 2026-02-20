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

void printVector(const std::vector<double> &nums)
{
    std::cout << '\n';
    if (nums.size() > 0)
    {
        for (auto x : nums)
        {
            std::cout << x << ' ';
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "You did not enter any numbers. Goodbye!" << std::endl;
    }
}