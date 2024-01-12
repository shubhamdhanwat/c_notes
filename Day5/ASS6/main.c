#include <stdio.h>
#include "header.h"

int main()
{

    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    while (num < 0 || num==0)
    {
        printf("Reenter the number greater than 0 :");
        scanf("%d",&num);
    }
    int ans = printSeries(num);
    printf("The sum of the series is %d .", ans);
    return 0;
}
