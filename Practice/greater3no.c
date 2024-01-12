#include <stdio.h>
void check_greater(int, int, int);
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers :");
    scanf("%d%d%d", &num1, &num2, &num3);
    check_greater(num1,num2,num3);
}

void check_greater(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("%d is the greater number .\n", a);
    }
    else if (b > c)
    {
        printf("%d is the greater number .\n", b);
    }
    else
    {
        printf("%d is the greater number .\n", c);
    }
}
