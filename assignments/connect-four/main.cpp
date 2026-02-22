#include <iostream>
#include <array>

// PROTOYPES
std::array<std::array<char, 7>, 6> buildBoard();
void print2DArray(const std::array<std::array<char, 7>, 6> &arr);
void printGameInfo();
void runGame();

// Main function
int main(int, char **)
{
    std::array<std::array<char, 7>, 6> board = buildBoard();
    printGameInfo();
    print2DArray(board);
}

// Function to actually run the game
void runGame()
{
}

// Template parameter function to print a 2D array of any type and size
void print2DArray(const std::array<std::array<char, 7>, 6> &arr)
{
    std::cout << "|1|2|3|4|5|6|7|" << '\n'
              << "---------------" << std::endl;
    for (const auto &row : arr)
    {
        for (const auto &element : row)
        {
            std::cout << "|" << element;
        }
        std::cout << "|";
        std::cout << '\n';
    }
}

// Function to print game info
void printGameInfo()
{
    std::cout << "------------------------------------" << '\n'
              << "Welcome to Connect 4!" << '\n'
              << "First play to CONNECT FOUR PIECES wins!" << '\n'
              << "------------------------------------" << std::endl;
}

// Template return value function to build a 6x7 2D array
std::array<std::array<char, 7>, 6> buildBoard()
{
    std::array<std::array<char, 7>, 6> board{{
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
    }};
    return board;
}