/*Write a C program to reverse an array using pointers.*/
void reverse(int *, int);
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the size of the array you want :");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // display
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, num);
    // display
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverse(int *q, int k)
{
    for (int i = 0; i < k / 2; i++)
    {
        int temp;
        temp = q[i];
        q[i] = q[k - i - 1];
        q[k - i - 1] = temp;
    }
}