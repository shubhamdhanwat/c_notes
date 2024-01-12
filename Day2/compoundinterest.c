#include<stdio.h>
#include<math.h>

float compount_interest(int  principal,int  years,float rate,int time)
{
    float ci=principal*(pow((1+(rate/years)),(years*time)));
    return ci;
}
int main ()

{
    int principal, years,t;
    float rate,ans;
    printf("Enter the principal , years,rate ,time. \n");
    scanf("%d%d%f%d",&principal,&years,&rate,&t);
    ans=compount_interest(principal,years,rate,t);
    printf("The compound interest is %.2f.\n",ans);
    return 0;
}