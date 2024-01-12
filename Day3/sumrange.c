#include<stdio.h>
// calculate sum of odd numbers in given range 100-400
int main()
{
    int num1,num2;
    printf("Enter the two numbers :");
    scanf("%d%d",&num1,&num2);
    int sum=0;
    for(int i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d",sum);
    return 0;
}