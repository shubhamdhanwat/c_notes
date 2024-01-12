#include <stdio.h>
int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int n, r;
    printf("Enter the n and r value :");
    scanf("%d%d", &n, &r);
    if (n > r)
    {
        int n1 = factorial(n);
        int n2 = factorial(r);
        int n3 = factorial(n - r);
        int ans = n1 / (n2 * n3);
        printf("The output is : %d\n", ans);
        return 0;
    }
    printf("The  n and r value are wrong .\n");

    return 0;
}