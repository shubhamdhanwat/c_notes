#include <stdio.h>
// 1 11 111 1111
// 9 99 999 9999
void pattern1(int);
void pattern2(int);

void main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    pattern1(num);
    pattern2(num);
}

void pattern1(int num)

{
    int count = 0;
    int term = 1;
    int sum = 0;
    while (count < num)
    {
        printf("%d ", term);
        count++;
        sum = sum + term;
        term = term * 10 + 1;
    }
    printf("\nSum=%d\n", sum);
}

void pattern2(int n)
{
    int count = 0;
    int i = 9;
    int sum = 0;

    while (count < n)
    {
        sum = sum + i;
        printf("%d ", i);
        count++;
        i = (i + 1) * 10 - 1;
    }
    printf("\nSum=%d", sum);
}