#include <stdio.h>
void check_armstrong(int, int);
int count_digit(int);
void main()
{
    int num1, num2;
    printf("Enter the range to find the armstrong numbers :");
    scanf("%d%d", &num1, &num2);
    printf("The armstrong number with in range %d to %d are :", num1, num2);
    for (int i = num1; i <= num2; i++)
    {
        int count = count_digit(i);
        check_armstrong(i, count);
    }
    printf("\n");
}
int count_digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
void check_armstrong(int num, int count)
{
    int temp = num;
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        int pro = 1;
        for (int i = 0; i < count; i++)
        {
            pro = pro * rem;
        }
        sum = sum + pro;
        num /= 10;
    }

    if (sum == temp)
    {
        printf("%d ,", temp);
    }
}