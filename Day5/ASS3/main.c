#include<stdio.h>
#include"header.h"

int main ()
{
    int num;
    printf("Enter the number to find if it has prime factors or not :");
    scanf("%d",&num);
    prime_factor(num);
    return 0;
}