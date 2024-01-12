#include <stdio.h>
#define SIZE 5
void printarr(int *);
int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarr(arr);
    return 0;
}

void printarr(int *k)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(k + i));
    }
}