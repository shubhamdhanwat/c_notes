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
    int temp=number;
    int flag=0;
    while (number != 0)
    {
        rem = number % 10;
        ans = pow(rem, count);
        sum = sum + ans;
        number /= 10;
    }
    if(sum==temp)
    {
        flag=1;
    }

    return flag;
}
int main()

{
    int num1, num2;
    printf("Enter the number :");
    scanf("%d%d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        int a = count_digit(i);
        int b = armstrongno(i, a);
        if (b == 1)
        {
            printf("%d ", i);

        }
    }

    return 0;
}
