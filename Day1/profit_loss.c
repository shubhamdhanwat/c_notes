#include <stdio.h>
int profit_loss(int sellp, int costp)
{
    int res = sellp - costp;

    return res;
}
int main()
{
    int a, b;
    printf("Enter the selling price and the cost price :");
    scanf("%d%d",&a,&b);
    int c=profit_loss(a,b);
    if(c>0)
    {
        printf("The profit is %d .\n",c);

    }
    else
    {
        printf("The loss is %d .\n",c);
    }
    return 0;
}