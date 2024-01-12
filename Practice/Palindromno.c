#include <stdio.h>
int check_palindrom(int);

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int ans = check_palindrom(num);
    if (ans == 1)
    {
        printf("The %d is the palindrom number .\n", num);
    }
    else
    {
        printf("The %d is not the palindrom number .\n", num);
    }
    return 0;
}

int check_palindrom(int num)
{
    int flag = 0;
    int temp = num;
    int rev = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == num)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}