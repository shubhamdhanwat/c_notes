#include <stdio.h>
int prime_range(int, int);

int main()
{
    int num1, num2;
    printf("Enter the range to find the prime numbers :");
    scanf("%d%d", &num1, &num2);
    if (num1 < 2)
    {
        prime_range(2, num2);
    }
    else
    {
        prime_range(num1, num2);
    }
    return 0;
}

int prime_range(int a, int b)
{

    for (int i = a; i <= b; i++)
    {
        int flag = 0;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}
