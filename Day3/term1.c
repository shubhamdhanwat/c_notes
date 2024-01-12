#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int sum=1;
    int add=1;
    printf("1 ");
    for(int i=2;i<=num;i++)
    {   add= add*10 + 1;
        printf("%d ",add);
        sum =sum+add;
    }
    printf("sum of the sequence is %d",sum);
    return 0;
}