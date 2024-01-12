#include<stdio.h>
#include "header.h"

int check_factorial(int num)
{
    if (num < 1)
    {
        return 1;
    }
    else
    {
        return num * check_factorial(num-1);
    }
}