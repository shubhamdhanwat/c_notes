#include <stdio.h>
int main()
{
    int num = 5;
    int ans = 1;
    while (num > 0)
    {
        ans = ans * num;
        num--;
    }
    printf("%d", ans);

    return 0;
}
