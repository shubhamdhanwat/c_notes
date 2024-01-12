#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the range :");
    scanf("%d%d",&n1,&n2);
    for(int j=n1;j<=n2;j++)
    {
        int flag = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            printf("%d\n", j);
        }
    }
}
