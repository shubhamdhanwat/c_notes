#include <stdio.h>
#include "header.h"

int checkNumber(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int getNumber(int num)
{
    int num1 = 2;
    while (num > 0)
    {

        int count = 0;
        int flag = 0;
        for (int i = 2; i < num1; i++)
        {
            if (num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            printf("%d ", num1);
            count++;
            num--;
        }
        num1++;
    }
    printf("\n");
}