#include <iostream>
#include "creditCardValidation.cpp"

int main(int, char **)
{
    long int ccNumber;
    char repeat = 'y';
    std::string holder = "";
    std::cout << "\nHello, from CreditCardValidation!" << std::endl;
    do
    {
        std::cout << "\nPlease enter a credit card number to validate: ";
        std::cin >> ccNumber;
        isValid(ccNumber) ? std::cout << "\nThe number is valid." << std::endl : std::cout << "The number is invalid." << std::endl;
        std::cout << "Would you like to verify another card?\nEnter \"Y\" or \"N\"" << std::endl;
        std::cin >> holder;
        repeat = std::tolower(holder.at(0));
    } while (repeat != 'n');
}
