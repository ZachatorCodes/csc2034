#include <iostream>
#include "creditCardValidation.cpp"

int main(int, char **)
{
    long long int ccNumber;
    char repeat = 'n';
    bool valid = false;
    std::cout << "\nHello, from CreditCardValidation!" << std::endl;
    do
    {
        std::cout << "\nPlease enter a credit card number to validate: ";
        std::cin >> ccNumber;
        isValid(ccNumber) ? std::cout << "\nThe number is valid." << std::endl : std::cout << "The number is invalid." << std::endl;
        std::cout << "\nWould you like to verify another card?\nEnter \"Y\" or \"N\"" << std::endl;
        std::cin >> holder;
        repeat = std::tolower(holder.at(0));
    } while (repeat != 'n');
}
