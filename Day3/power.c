#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

   
    int count=0;
   for(int i=1;i<num;i++)
   {
    if(num%i==0)
    {
        count++;
    }
   }
   printf("%d\n",count);
   return 0;
}