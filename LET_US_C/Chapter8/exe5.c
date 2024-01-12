/*A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.*/

#include <stdio.h>
void primefactor(int);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    primefactor(num);
    return 0;
}
void primefactor(int x)
{
    while (x % 2 == 0)
    {

        printf("2 ");
        x = x / 2;
    }

    for (int i = 3; i * i <= x; i = i + 2)
    {
        while (x % i == 0)
        {
            printf("%d ", i);
            x = x / i;
        }
    }

    if (x > 2)
        printf("%d ", x);
}