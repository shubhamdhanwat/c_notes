#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check wheather the year is leap yar or not:");
    scanf("%d",&year);

    if(year%100!=0 && year%4==0)
    {
        printf("The %d is leap year\n",year);
    }
    else if(year%400==0)
    {
        printf("The %d is leap year\n",year);
    }
    else{
        printf("THe %d is not a leap year\n",year);
    }
    return 0;
}