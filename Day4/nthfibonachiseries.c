#include<stdio.h>
int main()
{
    int term;
    printf("Enter the term for which you want the fibonacchi number :");
    scanf("%d",&term);
    int num1=0;
    int num2=1;
    int count=2;
    while (count<term)
    {
        int temp;
        temp=num2;
        num2=num1+num2;
        num1=temp;
        count++;
    }
    printf("The nth term of fibonacci series is %d .\n",num2);

    return 0;
    
    


}