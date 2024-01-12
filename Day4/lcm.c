#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two numbers :");
    scanf("%d%d",&num1,&num2);
    int max = num1 > num2 ? num1 : num2;
    int count=1;
    while(count!=0)
    {
        if(max%num1==0 && max%num2==0)
        {
            count=0;
            printf("%d",max);
            break;
        }
        max++;
    }
    return 0;
}
