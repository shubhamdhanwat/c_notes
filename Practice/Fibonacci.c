#include <stdio.h>
void fibonacci_series(int);
void main()
{

    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int num1 = 0;
    int num2 = 1;
    // printf("%d %d ", num1, num2);
    fibonacci_series(num);
}

void fibonacci_series(int num)
{
    int count = 2;
    int num1 = 0;
    int num2 = 1;
    while (count < num)
    {
        int temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        // printf("%d ", num2);  // to print the series;
        count++;
    }
    printf("The %d fibonacci number is %d.\n", num, num2); // to print the exact number.
}