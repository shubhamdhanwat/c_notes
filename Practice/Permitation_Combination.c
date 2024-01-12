#include <stdio.h>
int factorial(int);
int permitation(int, int);
int combination(int, int);

int main()
{
    int n, r;
    printf("Enter the n and r value :");
    scanf("%d%d", &n, &r);
    if (n > r)
    {
        printf("The permitation of n=%d and r=%d is %d.\n", n, r, permitation(n, r));
        printf("The Combinaton of n=%d and r=%d is %d.\n", n, r, combination(n, r));
    }
    else
    {
        printf("Invalid output !!!\n");
        printf("Enter the n and r value  such than n is greater than r:");
        scanf("%d%d", &n, &r);
        if (n > r)
        {
            printf("The permitation of n=%d and r=%d is %d.\n", n, r, permitation(n, r));
            printf("The Combinaton of n=%d and r=%d is %d.\n", n, r, combination(n, r));
        }
        else
        {
            printf("Invalid output !!!\n");
            printf("Program exit out.\n");
            return 0;
        }
    }
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int permitation(int n, int r)
{
    int n1 = factorial(n);
    int n2 = factorial(n - r);

    return n1 / n2;
}

int combination(int n, int r)
{
    int n1 = factorial(n);
    int n2 = factorial(r);
    int n3 = factorial(n - r);

    return n1 / (n2 * n3);
}