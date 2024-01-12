#include<stdio.h>
#include"header.h"

void RangeSquare(int num1,int num2)
{
    for(int i=num1;i<=num2;i++)
    {
        printf("The square of %d is %d\n",i,i*i);
    }
}