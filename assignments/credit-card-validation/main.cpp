#include <iostream>
#include "creditCardValidation.cpp"

// The application works perfectly,
// EXCEPT for if the number entered overflows 
// the allocated memory for a long long variable.

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


// If std::cin overflows once, it will not work for future calls.

// That means that if you overflow the input on the first call, the program will stop
// because the loop variable will stay as an n.

// If you enter a valid number, then choose 'y' to continue looping, then
// overflow the variable, you will get stuck in an infinite loop.