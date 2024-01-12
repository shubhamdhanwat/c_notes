#include <stdio.h>
int main()
{
    int n = 2;
    int count = 0;
    while (count <= 10)
    {
        int flag = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            printf("%d\n", n);
            count++;
        }
        n++;
    }
}
