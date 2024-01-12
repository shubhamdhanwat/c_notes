#include <stdio.h>
int main()
{
    int count = 0;
    int i = 0;
    while (count < 10)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
}