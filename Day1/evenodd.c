#include <stdio.h>
int main()
{

    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The %d is even ", num);
    }
    else
    {
        printf("The %d is odd", num);
    }
    return 0;
}