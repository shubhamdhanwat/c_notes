//Write a function power ( a, b ), to calculate the value of a raised to b.
#include<stdio.h>
float calpow(float,float);
float main()
{
    float a,b,ans;
    printf("Enter the number a and b :");
    scanf("%f%f",&a,&b);
    ans=calpow(a,b);
    printf("%f raised to %f is %f.",a,b,ans);
    return 0;

}

float calpow(float x,float y)
{
    float ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*x;
    }

    return ans;
}