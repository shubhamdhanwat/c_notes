/*Write a C program to input and print array elements using pointer.*/
void display(int *,int);
#include<stdio.h>
int main()
{
    int siz;
    printf("Enter the size of the array :");
    scanf("%d",&siz);
    int arr[siz];
    for(int i=0;i<siz;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    display(arr,siz);


}
void display(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}