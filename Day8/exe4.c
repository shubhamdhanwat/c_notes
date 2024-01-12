/*Write a C program to swap two arrays using pointers.*/
#include <stdio.h>
void accept(int *, int);
void display(int *, int);
void swap(int *, int *, int *, int);
int main()
{
    int num;
    printf("Enter the size of the array :");
    scanf("%d", &num);
    int arr1[num];
    accept(arr1, num);
    display(arr1, num);
    int arr2[num];
    accept(arr2, num);
    display(arr2, num);
    int temp[num];
    swap(arr1, arr2, temp, num);
    printf("Array 1 after swap :\n");
    display(arr1, num);
    printf("Array 2 after swap :\n");
    display(arr2, num);

    return 0;
}

void accept(int *q, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("Enter the  %d element :", i);
        scanf("%d", &q[i]);
    }
}
void display(int *k, int p)
{
    for (int i = 0; i < p; i++)
    {
        printf("%d ", k[i]);
    }
    printf("\n");
}

void swap(int *p, int *q, int *t, int l)
{
    for (int i = 0; i < l; i++)
    {
        t[i] = p[i];
        p[i] = q[i];
        q[i] = t[i];
    }
}