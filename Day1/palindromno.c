#include <stdio.h>
int palindromno(int num)
{
    int rev = 0;
    int rem = 0;
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter the no number to check wheather the number is palindrom or not :");
    scanf("%d", &number);
    int ans=palindromno(number);
    if(ans==1)
    {
        printf("%d is a palindrom number .\n",number);
    }
    else{
        printf("%d is not a palindrom number .\n",number);
    }
    return 0;
}