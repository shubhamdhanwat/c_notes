// Write a function to calculate the factorial value of any integer entere through the keyboard.
#include <stdio.h>
int calfact(int);
int main()
{
    int num, ans;
    printf("Enter the number :");
    scanf("%d", &num);
    ans = calfact(num);
    printf("\nThe factorial of %d is %d \n.", num, ans);
    return 0;
}
int calfact(int number)
{
    int factorial = 1;

    for (int i = 1; i <= number;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}