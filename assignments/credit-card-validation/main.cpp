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
        valid = isValid(ccNumber);
        if (valid)
        {
            std::cout << "The number is valid." << std::endl;
        }
        else
        {
            std::cout << "The number is invalid." << std::endl;
        }
        std::cout << "\nWould you like to verify another card?\nEnter \"y\" or \"n\"" << std::endl;
        std::cin >> repeat;
    } while (repeat != 'n');
}
