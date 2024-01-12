#include <stdio.h>
int factorial(int num)
{
    if (num < 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    printf("The factorial of %d is %d.\n", number, factorial(number));
    return 0;
}