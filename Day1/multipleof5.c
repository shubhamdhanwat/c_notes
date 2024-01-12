#include<stdio.h>
int main()

{   
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("The %d is multiple of 5 .\n",num);
    }
    else{
        printf("The %d is not multiple of 5 .\n",num);

    }
    return 0;
}