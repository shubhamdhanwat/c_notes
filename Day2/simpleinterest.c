#include<stdio.h>
float simple_interest(int p,int n, float r)
{
    float si=(p*r*n)/100;
    return si;


}
int main ()
{
    int principal,years;
    float rate;
    printf("Enter the principal amount, no of years and rate :");
    scanf("%d%d%f",&principal,&years,&rate);
    float ans=simple_interest(principal,years,rate);
    printf("The simple interest is  :%.2f",ans);
    return 0;

}
