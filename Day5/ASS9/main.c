#include <stdio.h>
#include <math.h>
#include "header.h"

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int ans = countdigit(num);
    int ans1 = checkarmstrong(num, ans);
    if (num == ans1)
    {
        printf("%d is the armstrong number .", num);
    }
    else
    {
        printf("%d is not the armstrong number .", num);
    }
    return 0;
}