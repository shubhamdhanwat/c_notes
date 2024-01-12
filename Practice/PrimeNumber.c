#include <stdio.h>
int check_prime(int);

int main()
{
    int num;
    printf("Enter the number to check weather the number is prime or not :");
    scanf("%d", &num);
    int ans = check_prime(num);
    if (ans == 0)
    {
        printf("The %d is the prime number .\n", num);
    }
    else
    {
        printf("The %d is not the prime number .\n", num);
    }

    return 0;
}

int check_prime(int n)
{
    int count = 0;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}