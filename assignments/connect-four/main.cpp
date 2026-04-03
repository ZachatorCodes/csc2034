#include <array>
#include <iostream>

// PROTOYPES
void printIntro();
void buildBoard(std::array<std::array<char, 7>, 6>& board);
void printBoard(const std::array<std::array<char, 7>, 6>& arr);
void runGame(std::array<std::array<char, 7>, 6>& board);
void makeMove(std::array<std::array<char, 7>, 6>& board, const char& player);
bool checkWin(const std::array<std::array<char, 7>, 6>& board, const char& player);

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

void printIntro()
{
    std::cout << "Welcome to Connect 4!" << std::endl;
    std::cout << "Player 1: R" << std::endl;
    std::cout << "Player 2: Y" << std::endl;
    std::cout << "To make a move, enter the column number (1-7) where you want to drop your piece." << std::endl;
    std::cout << "The first player to connect four pieces in a row (horizontally, vertically, or diagonally) wins!"
              << std::endl;
}