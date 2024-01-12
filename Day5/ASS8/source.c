#include<stdio.h>
#include"header.h"

int checkprime(int num)
{   
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("The number %d is not prime number .\n",num);

    }
    else{
        printf("The number %d is prime number .\n",num);

    }
    
    return 0;
}

