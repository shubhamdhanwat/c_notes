#include<stdio.h>
int grater_num(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
    {
        return num1;
    }
    else if(num2>num3)
    {
        return num2;

    }
    else{
        return num3;
    }
}
int main()
{
    int a,b,c;
    printf("Enter the numbers a , b, c :");
    scanf("%d%d%d",&a,&b,&c);
    int ans=grater_num(a,b,c);
    printf("%d is greater number .\n",ans);
    return 0;
}