#include <stdio.h>
int freq_digit(int digit, int rem)
{
    int count = 0;
    while (digit > 0)
    {
        int rem1 = digit % 10;
        if (rem1 == rem)
        {
            count++;

        }
        
        digit /= 10;
    }
    return count;
}
int main()
{
    int digit;
    printf("Enter the digit :");
    scanf("%d", &digit);

    int temp = digit;
    while (temp != 0)
    {
        int rem = temp % 10;
        printf("THe frequecy of %d in  %d is %d.\n", rem, digit, freq_digit(digit, rem));
        temp/=10;
    }

    return 0;
}