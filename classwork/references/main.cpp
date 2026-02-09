#include <iostream>
#include <array>

void printCArray(int arr[], size_t size)
{
    std::cout << "Printing C Array";
    for (size_t i; i < size; i++)
    {
        std::cout << arr[i] << '\n';
    }
    std::cout << std::endl;
}

void printStdArray(std::array<int, 3> arr)
{
    std::cout << "Std Array: ";
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] *= 2;
    }
    for (int val : arr)
    {
        std::cout << val << " ";
    }
    std::cout << "(Size: " << arr.size() << ")" << std::endl;
    std::cout << std::endl;
}

int main(int, char **)
{
    std::cout << "Hello, from references!\n";

    // C-style array
    // int cArr[] = {1, 2, 3};
    int cArr[]{1, 2, 3};

    // C++ class for array
    std::array<int, 3> sArr{1, 2, 3};

    // Uninitialized C-style array
    std::string stNIArr[5];

    stNIArr[0] = "First";
    stNIArr[2] = "Second";
    stNIArr[3] = "Third";
    stNIArr[4] = "Fourth";

    for (size_t i = 0; i < std::size(stNIArr); i++)
    {
        std::cout << stNIArr[i] << '\n';
    }
    std::cout << std::endl;

    for (size_t i = 0; i < sizeof(cArr) / sizeof(int); i++)
    {
        std::cout << cArr[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << sizeof(cArr) << ' ' << sizeof(int) << std::endl;

    for (auto x : stNIArr)
    {
        std::cout << x << '\n';
    }
    std::cout << std::endl;

    int nums[5];
    nums[0] = 0;
    nums[2] = 2;
    nums[3] = 3;
    nums[4] = 4;

    for (int x : nums)
    {
        std::cout << x << '\n';
    }
    std::cout << std::endl;

    printCArray(cArr, std::size(cArr));
    printStdArray(sArr);
    for (int x : sArr)
    {
        std::cout << x << '\n';
    }
    std::cout << std::endl;
}
