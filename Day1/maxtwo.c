#include<stdio.h>
__int32_t max(int num1,int num2)
{
    if(num1>num2)
    {
        return num1; 
    }
    else
    {
        return num2;
    }
    return 0;
    
}
int main()
{
    int a,b;
    printf("Enter the number a and b:");
    scanf("%d%d",&a,&b);
    int ans=max(a,b);
    printf("The maximum number is %d",ans);
    return 0;

}