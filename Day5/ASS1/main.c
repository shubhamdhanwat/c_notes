#include <stdio.h>
#include "header.h"

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int a = checknum(number);
    if (a == 1)
    {
        printf("The %d is Even number\n", number);
    }
    else
    {
        printf("The %d is Odd number \n", number);
    }
    return 0;
}
