#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two number num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    

    while(num1<=num2)
    {
        if(num1%2==0)
        {
            printf("%d\n",num1);
            
        }
        num1++;
    }
}