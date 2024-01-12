/*Write a C program to add two numbers using pointers.
Write a C program to swap two numbers using pointers.*/

#include<stdio.h>
void add(int,int ,int *);
void swap(int *,int *);

int main()
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    int ans;
    add(a,b,&ans);
    printf("The sum of the two numbers is %d\n",ans);
    printf("The numbers before swap a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("The numbers before swap a=%d b=%d\n",a,b);
    


}
void add(int b,int c,int *p)
{
    *p=b+c;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}