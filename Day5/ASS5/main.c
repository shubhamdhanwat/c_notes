#include<stdio.h>
#include"header.h"

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("The factorial of %d is %d .\n",number,factorial(number));
    display(number);
    int b=count_digit(number);
    printf("The reverse of the %d is %d.\n",number,reverse_number(number,b));
}
