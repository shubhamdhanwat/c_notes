#include<stdio.h>
int perfect_number(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
            if(num%i==0)
            {
                sum+=i;
            }
    }
    if(sum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    int ans=perfect_number(number);
    if(ans==1)
    {
        printf("The number %d is perfect number.\n ",number);
    }
    else
    {
        printf("The number %d is not perfect number .\n",number);
    }
    return 0;
    
}