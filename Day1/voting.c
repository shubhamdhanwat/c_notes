#include <stdio.h>

int check_age(int);
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d", &age);
    if (age < 0)
    {
        printf("Enter the vaiid age greater than 0:");
        scanf("%d", &age);
    }
    int ans = check_age(age);
    if (ans == 1)
    {
        printf("The person has age %d  and is eligible for voting .\n", age);
    }
    else
    {
        printf("The person has age %d and is not eligible for voting .\n", age);
    }
    return 0;
}

int check_age(int a)
{
    if (a >= 18)
    {
        return 1;
    }
    return 0;
}