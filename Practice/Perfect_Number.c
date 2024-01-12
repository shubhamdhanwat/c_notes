#include <stdio.h>
int check_perfectNo(int);
void main()
{
    int num;
    printf("Enter the number to check weather the number is prefect number :");
    scanf("%d", &num);
    int ans = check_perfectNo(num);
    if (ans == 1)
    {
        printf("The number %d is the perfect number.\n", num);
    }
    else
    {
        printf("The number %d is not the perfect number.\n", num);
    }
}

int check_perfectNo(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}