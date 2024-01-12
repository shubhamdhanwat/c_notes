#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the two numbers :");
    scanf("%d%d",&num1,&num2);

    int max=1;
    for(int i=2;i<num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            max=i;
     
        }
    }
    printf("%d",max);

    return 0;

}