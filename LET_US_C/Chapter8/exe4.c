/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.*/
#include<stdio.h>
void checkleapyear(int);
int main()
{
    int year;
    printf("Enter the year to check weather the year is leap year or not :");
    scanf("%d",&year);
    checkleapyear(year);
    return 0;
}
void checkleapyear(int n)
{
    if(n%100!=0 && n%4==0)
    {
        printf("%d is the leap year.\n",n);

    }
    else if(n%400==0)
    {
        printf("%d is the leap year.\n",n);
    }
    else
    {
        printf("%d is not the leap year.\n",n);
    }
}
