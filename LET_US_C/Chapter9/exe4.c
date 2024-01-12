/*Write a program that defines a function that calculates power of one
number raised to another and factorial value of a number in one call.*/


#include<stdio.h>
#include<math.h>

void power_fact(int,int,int,int *,int *);
int main()
{
    int num1,num2;
    printf("Enter the number to calculate the power of num1 raised to num2:");
    scanf("%d%d",&num1,&num2);
    int num3;
    printf("Enter the number to find the factorial of the number  :");
    scanf("%d",&num3);
    int fact,power;
    power_fact(num1,num2,num3,&fact,&power);
    printf("The %d raised to %d is %d\n",num1,num2,power);
    printf("The factorial of the %d is %d\n",num3,fact);
    return 0;
}

void power_fact(int a,int b,int c,int *p,int *q)
{
    *q=pow(a,b);
    int pro=1;
    for(int i=1;i<=c;i++)
    {
        pro=pro*i;
    }
    *p=pro;

}