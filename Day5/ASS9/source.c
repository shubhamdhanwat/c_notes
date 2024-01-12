#include<stdio.h>
#include"header.h"
#include<math.h>
//gcc  main.c -o main -lm

int countdigit(int num)
{   
    int count=0;
    while(num>0)
    {
        count++;
        num/=10;

    }

    return count;
}
int checkarmstrong(int num,int count)
{
    int sum=0,b=0;
    int rem=0;
    while (num>0)
    {
        int rem=num%10;
        b=pow(rem,count);
        sum=sum+b;
        num=num/10;

    }
    return sum;
    

}