#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 1;
    printf("The fibonacchi series is :");
    printf("%d %d ", num1, num2);
    int count = 2;

    while (count < 10)
    {
        int temp;
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        printf("%d ", num2);
        count++;
    }
    printf("\n");
    return 0;
}