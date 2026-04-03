#include <array>
#include <iostream>

// PROTOYPES
void buildBoard(std::array<std::array<char, 7>, 6>& board);
void printBoard(const std::array<std::array<char, 7>, 6>& arr);

// Main function
int main(int, char**)
{
    std::array<std::array<char, 7>, 6> board;
    buildBoard(board);
    printBoard(board);
}

// Template parameter function to print a 2D array of any type and size
void printBoard(const std::array<std::array<char, 7>, 6>& arr)
{
    int rowNum = 1;
    int colNum = 1;
    std::cout << "   " << "1 2 3 4 5 6 7" << std::endl;
    for (const auto& row : arr)
    {
        std::cout << rowNum++ << " ";
        for (const auto& element : row)
        {
            std::cout << "|" << element;
        }
        std::cout << "|";
        std::cout << '\n';
    }
}

//
void buildBoard(std::array<std::array<char, 7>, 6>& board)
{
    for (auto& row : board)
    {
        for (auto& element : row)
        {
            element = 'X';
        }
    }
}