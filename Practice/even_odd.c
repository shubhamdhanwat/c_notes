#include <stdio.h>
int check_evenodd(int);

int main()
{
    int num;
    printf("Enter the number to check weather the numbert is even or odd: ");
    scanf("%d", &num);
    int ans = check_evenodd(num);
    if (ans == 1)
    {
        printf("The number %d is the even number .\n", num);
    }
    else
    {
        printf("The number %d is the odd number .\n", num);
    }
    return 0;
}

int check_evenodd(int n)
{
    int flag = 0;
    if (n % 2 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    return flag;
}