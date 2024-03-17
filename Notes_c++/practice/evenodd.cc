#include <iostream>

class NumberChecker
{
public:
    // Member function to check if a number is even or odd
    void checkEvenOdd(int number)
    {
        if (number % 2 == 0)
        {
            std::cout << number << " is an even number." << std::endl;
        }
        else
        {
            std::cout << number << " is an odd number." << std::endl;
        }
    }
};

int main()
{
    // Declare an object of the NumberChecker class
    NumberChecker checker;

    // Declare a variable to store the user input
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Call the checkEvenOdd member function of the NumberChecker class
    checker.checkEvenOdd(number);

    return 0;
}