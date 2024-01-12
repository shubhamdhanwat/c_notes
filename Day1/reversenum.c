#include<stdio.h>

int reverse_number(int number)
{   
    int rev=0;
    int rem=0;
    while (number!=0)
    {
        rem=number%10;
        rev= rev*10 +rem;
        number=number/10;          
    }
    return rev;
    
}
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    int ans=reverse_number(num);
    printf("The reverse of number %d = %d",num,ans);
    return 0;
}