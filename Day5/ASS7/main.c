#include <stdio.h>
#include "header.h"

int main()

{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int ans = checkNumber(number);
    if (ans == number)
    {
        printf("The %d is the perfect number .\n", number);
    }
    else
    {

        printf("The %d is not the perfect number .\n", number);
    }
    printf("The first %d prime numbers are :", number);
    getNumber(number);
    return 0;
}