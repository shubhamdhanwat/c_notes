#include<stdio.h>
#include "header.h"

int main ()
{   
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int b=check_factorial(num);
    printf("The factorail of %d is %d ",num,b);
    return 0;
}