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
    for (const auto& row : arr)
    {
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