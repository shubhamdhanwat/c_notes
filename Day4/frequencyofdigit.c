#include <stdio.h>

int freq_digit(int digit, int number)
{
    int count = 0;
    while (digit > 0)
    {
        int rem = digit % 10;
        if (number == rem)
        {
            count++;
        }
        digit /= 10;
    }

    return count;
}
int main()
{
    int digit, num;
    printf("Enter the digit  and number of which you want to find the accuracy  :");
    scanf("%d%d", &digit, &num);
    printf("The frequency of %d in %d is %d.", num, digit, freq_digit(digit, num));
}
