#include <stdio.h>
int check_prime_num(int number)

{
    int i = 0;

    for (int i = 2; i <= number - 1; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number to check wheather the number is prime or not :");
    scanf("%d", &num);
    int res = check_prime_num(num);
    if (res == 1)
    {
        printf("%d is a prime number .\n", num);
    }
    else
    {
        printf("%d is not a prime number .\n", num);
    }

    return 0;
}