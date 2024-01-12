/*Write a C program to copy one array to another using pointers.*/
#include<stdio.h>
void accept(int  *,int);
void print(int *,int);
void copy(int *,int *,int);
int main()
{
    int num;
    printf("Enter the size of the array :");
    scanf("%d",&num);
    int arr[num];
    accept(arr,num);
    print(arr,num);

    int temp[num];
    copy(arr,temp,num);
    print(temp,num);
    return 0;
    
}
void accept(int *q,int b)
{
    for(int i=0;i<b;i++)

    {
        printf("Enter the number :");
        scanf("%d",&q[i]);
    }
}
void print(int *p,int c)
{   
    printf("The elements of the array are : ");
    for(int i=0;i<c;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
void copy(int *s,int *z,int k)
{
    //int temp[k];
    for(int i=0;i<k;i++)
    {
        z[i]=s[i];
    }
}
