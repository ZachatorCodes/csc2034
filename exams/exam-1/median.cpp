#include <iostream>
#include <vector>

// Function Prototypes
void collectData(std::vector<double> &nums);
double findMedian(const std::vector<double> &nums);
void printVector(const std::vector<double> &nums);

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

double findMedian(const std::vector<double> &nums)
{
    double median;
    if (nums.size() < 1)
    {
        median = 0;
    }
    else if (nums.size() == 1)
    {
        median = nums[0];
    }
    else if (nums.size() % 2 == 0)
    {
        double num1{nums[(nums.size() / 2) - 1]};
        double num2{nums[(nums.size() / 2)]};
        std::cout << num1 << ' ' << num2 << std::endl;
        median = (num1 + num2) / 2;
    }
    else
    {
        median = nums[nums.size() / 2];
    }
    return median;
}

void printVector(const std::vector<double> &nums)
{
    std::cout << "----------------------------------------" << '\n';
    if (nums.size() > 0)
    {
        std::cout << "Numbers entered: ";
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (i == nums.size() - 1)
            {
                std::cout << nums[i];
            }
            else
            {
                std::cout << nums[i] << ", ";
            }
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "You did not enter any numbers. Goodbye!" << std::endl;
    }
}