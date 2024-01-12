#include<stdio.h>
#include"header.h"

int factorial(int num)
{
    if(num<1)
    {
        return 1;
        
    }
    else
    {
        return num*factorial(num-1);
    }
}

int display(int num)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;

}
int count_digit(int num)
{
    int count=0;
    while (num!=0)
    {
        count++;
        num/=10;
        
    }
    return count;
    
}

int reverse_number(int num,int digit)
{       
    int rev=0;
    while(digit!=0)
    {   
        int rem=num%10;
        rev=rev*10+rem;
        num/=10;
        digit--;

    }
    return rev;

}