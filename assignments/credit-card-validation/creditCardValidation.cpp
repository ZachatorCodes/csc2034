#include <iostream>
using namespace std;

// A program using Hans Luhn's algorithm to validate a c/c number.

//////////////////////////////////////////////////////////////////////////////////////////////
// Prototypes
//////////////////////////////////////////////////////////////////////////////////////////////

// Return true if the argument is a valid card number. main() will call this function.
bool isValid(unsigned long long int number);

// Get the result from step 2
int sumOfDoubleEvenPlace(unsigned long long int number);

// Return this number if argument is a single digit,
// otherwise return the sum of the two digit argument.
int getDigit(int number);

// Return sum of odd placed digits in argument
int sumOfOddPlace(unsigned long long int number); // DONE

// Return true if prefix d is a prefix for number
bool prefixMatched(unsigned long long int number, int d); // DONE

// Return the number of digits in argument
int getSize(unsigned long long int number); // DONE

// Return the first k number of digits from number.
// If the number of digits in number is is less than k, return number.
unsigned long int getPrefix(unsigned long long int number, int k); // DONE

//////////////////////////////////////////////////////////////////////////////////////////////
// Functions
//////////////////////////////////////////////////////////////////////////////////////////////

bool isValid(unsigned long long int number)
{
  if (getSize(number) < 13 || getSize(number) > 16)
  {
    return false;
  }
  return true;
}

int getSize(unsigned long long int number)
{
  int counter = 0;
  while (number > 0)
  {
    // std::cout << num << std::endl;
    number /= 10;
    counter++;
  }
  // std::cout << "\n\n" << counter;
  return counter;
}

unsigned long int getPrefix(unsigned long long int number, int k)
{
  int numLength = getSize(number);
  if (numLength > k)
  {
    int difference = numLength - k;
    for (int i = 0; i < difference; i++)
    {
      number /= 10;
    }
  }
  // std::cout << number;
  return number;
}

bool prefixMatched(unsigned long long int number, int d)
{
  return getPrefix(number, getSize(d)) == d;
}

int sumOfOddPlace(unsigned long long int number)
{
  int numLength = getSize(number);
  int oddSum = 0;
  for (int i = 0; i < numLength / 2 + 1; i++)
  {
    oddSum += number % 10;
    number /= 10;
    number /= 10;
  }
  return oddSum;
}