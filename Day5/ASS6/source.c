#include<stdio.h>
#include"header.h"

int printSeries(int num)
{
    int sum=1;
    int iter=1;
    int count=1;
    while (count<=num)
    {   

        printf("%d ",iter);
        iter=iter*10 +1;
        sum=sum+iter;
        count++;
    }
    printf("\n");

    return sum;
    
}