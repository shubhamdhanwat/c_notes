#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int palindromno(int num)
{
    int rev = 0;
    int rem = 0;
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int count_digit(int number)
{
    int count = 0;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    return count;
}
int armstrongno(int number, int count)
{
    int ans = 0;
    int sum = 0;
    int rem = 0;
    int temp = number;
    while (number != 0)
    {
        rem = number % 10;
        ans = pow(rem, count);
        sum = sum + ans;
        number /= 10;
    }

    return sum;
}

int factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}
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
    int choice;
    while (1)
    {
        printf("1. Prime \n");
        printf("2. Factorial \n");
        printf("3. Armstrong No \n");
        printf("4. Palindrom No \n");
        printf("5. IsDigit \n");
        printf("6. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case (1):
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

            break;
        }

        case (2):
        {
            int number;
            printf("Enter the number :");
            scanf("%d", &number);
            printf("The factorial of number is %d . \n", factorial(number));
            break;
        }

        case (3):
        {
            int num;
            printf("Enter the number :");
            scanf("%d", &num);
            int a = count_digit(num);
            int b = armstrongno(num, a);
            if (b == num)
            {
                printf("%d is the amstrong number .\n", num);
            }
            else
            {
                printf("%d is not the amstrong number .\n", num);
            }
            break;
        }

        case (4):
        {
            int number;
            printf("Enter the no number to check wheather the number is palindrom or not :");
            scanf("%d", &number);
            int ans = palindromno(number);
            if (ans == 1)
            {
                printf("%d is a palindrom number .\n", number);
            }
            else
            {
                printf("%d is not a palindrom number .\n", number);
            }
            break;
        }
        case (5):
        {
            char num;
            printf("Enter the number :");
            scanf("%s", &num);
            int ans = check_digit(num);
            if (ans == 1)
            {
                printf("the %c is digit.\n", num);
            }
            else
            {
                printf("the %c is not  digit.\n", num);
            }
            break;
        }

        case (6):
            exit(0);
        }
    }
}
