#include<stdio.h>
#include"header.h"

void prime_factor(int number)
{   
    int sum=1;

    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            printf("%d ",i);
            sum=sum*i;
            if(sum==number)
            {
                return ;
            }
        }
    }

    return ;
}