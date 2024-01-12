#include <stdio.h>
void cal_avg(int *, int);

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    cal_avg(arr, size);
}

void cal_avg(int* a, int b)
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += a[i];
    }
    float avg = (float)sum / b;
    printf("The average of the array elements is %.2f.\n", avg);
}