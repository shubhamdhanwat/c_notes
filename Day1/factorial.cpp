#include <iostream>

int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int num;
    std::cout << "Enter the number to find the factorial";
    std::cin >> num;
    factorial(num);
    std::cout << "Factorial of " << num << " is :" << factorial(num);
    return 0;
}