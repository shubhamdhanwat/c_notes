#include<stdio.h>
#include"header.h"
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int b=count_digit(num);
    printf("The reverse of the %d is %d.\n",num,reverse_number(num,b));
    return 0;
}

