#include <stdio.h>
#include <math.h>
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
int main()

{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int a = count_digit(num);
    int b = armstrongno(num, a);
    if (b == num)
    {
        printf("%d is the amstrong number ./n", num);
    }
    else
    {
        printf("%d is not the amstrong number ./n", num);
    }
    return 0;
}