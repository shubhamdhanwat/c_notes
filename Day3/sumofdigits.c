#include<stdio.h>
int main()

{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int sum=0;
    int rem;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;

    }
    printf("The sum of digit is :%d.\n",sum);
    return  0;

}
