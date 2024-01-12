#include <stdio.h>
int check_leapyear(int);

int main()
{
    int year;
    printf("Enter the year to check weather the year is leap year or not :");
    scanf("%d", &year);
    int ans = check_leapyear(year);
    if (ans == 1)
    {
        printf("The %d is the leap year .\n", year);
    }
    else
    {
        printf("The %d is not the leap year .\n", year);
    }
    return 0;
}

int check_leapyear(int num)
{
    int flag = 0;

    if (num % 100 != 0 && num % 4 == 0)
    {
        flag = 1;
    }
    else if (num % 400 == 0)
    {
        flag = 1;
    }
    return flag;
}