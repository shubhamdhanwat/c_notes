#include <stdio.h>
int fact(int);

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The factorial of the number %d is 1 .\n", num);
    }
    else if (num < 0)
    {
        printf("Enter the postive number :");
        scanf("%d", &num);
        int ans = fact(num);
        printf("The factorial of the number %d is %d .\n", num, ans);
    }
    else if (num > 0)
    {
        int ans = fact(num);
        printf("The factorial of the number %d is %d .\n", num, ans);
    }

    return 0;
}

int fact(int n)
{

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}