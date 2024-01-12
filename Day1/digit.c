#include <stdio.h>
char check_digit(char num)
{
    if (num >= '0' && num <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char num;
    printf("Enter the number :");
    scanf("%c", &num);
    int ans = check_digit(num);
    if (ans == 1)
    {
        printf("the %c is digit.", num);
    }
    else
    {
        printf("the %c is not  digit.", num);
    }

    return 0;
}
