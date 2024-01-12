#include<stdio.h>
void calavg(int *,int);
int main ()
{
    int m[5]={11,44,20,77,9};
    calavg(m,5);
    return 0;
}
void calavg(int *q,int b)
{
    int sum=0;
    int i;
    float avg=0;
    for(i=0;i<b;i++)
    {
        sum=sum+*(q+i);
    }
    avg= (float) sum/b;
    printf(" The average is %f",avg);
   
}