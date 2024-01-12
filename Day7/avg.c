#include<stdio.h>
void calavg(int *,int);
int main()
{
    int arr[5]={20,20,20};
    calavg(arr,3);
    return 0;
}
void calavg(int *k,int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+ k[i];
    }

    avg=(float)sum/n;
    printf("The average is %.2f",avg);
    

}
