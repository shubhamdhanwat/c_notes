#include <stdio.h>
int main()
{
    int a = 1, b = -1,c=10;
    if (--a && b++)
    {
        printf("%d %d ", a, b);
    }
    else
    {
        printf("%d %d ", a, c);
    }
    return 0;
}
