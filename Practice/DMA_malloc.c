#include <stdio.h>
#include <stdlib.h>
void display(int *, int);
void cal_avg(int *, int);
void main()
{
    int num;
    printf("Enter the size of the array :");
    scanf("%d", &num);
    int *p = NULL;
    p = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element :", i);
        scanf("%d", &p[i]);
    }
    display(p, num);
    cal_avg(p, num);
    free(p);
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element :", i);
        scanf("%d", &p[i]);
    }
    display(p, num);
    cal_avg(p, num);
}
void cal_avg(int *p, int b)
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += p[i];
    }
    float avg = (float)sum / b;
    printf("The average of the array elements is %.2f.\n", avg);
}

void display(int *q, int n)
{
    printf("The elements in the array are :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}