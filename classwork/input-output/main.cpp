#include <iostream>
#include <string>

int main(int, char **)
{
    int i;
    std::cout << "Enter the first number: ";
    std::cin >> i;
    int j;
    std::cout << "Enter the second number: ";
    std::cin >> j;
    std::cout << "Sum: " << i + j << " Product: " << i * j
              << " Quotient: " << i / j << " Remainder: " << i % j << std::endl;
    std::cout << "Twinkle, twinkle, little star,\n\tHow I wonder what you are!\
    \n\t\tUp above the world so high,\n\t\tLike a diamond in the sky.\
    \nTwinkle, twinkle, little star,\n\tHow I wonder what you are"
              << std::endl;
    std::string mystr;
    std::cout << "Enter words? ";
    std::cin.ignore();
    getline(std::cin, mystr);
    std::cout << mystr;
}