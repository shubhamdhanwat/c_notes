#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the numbers num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    for(int i=num1;i<=num2;i++)
    {
        printf("The square of %d is %d\n",i,i*i);
    }
        
    
    return 0;
}