#include <stdio.h>

void Prime_series(int);

void main()
{
    int num;
    printf("Enter the number to find first n prime number :");
    scanf("%d", &num);
    Prime_series(num);
}

void Prime_series(int n)

{
    int count=0;
    int num=2;
    while (count<n)
    {
        int flag=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",num);
            count++;

        }
        num++;
    }
    
}