#include <stdio.h>
#include <stdlib.h>
void avg(int *, int);
int main()
{
    int num;
    printf("Enter the number to dynamically allocate the memory : ");
    scanf("%d", &num);
    int *q = NULL;
    q = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &q[i]);
    }
    avg(q, num);
    int num2;
    printf("Enter the numbers to be added :");
    scanf("%d", &num2);
    q = realloc(q, (num + num2) * sizeof(int));
    for (int i = num; i < num+num2; i++)
    {
        scanf("%d", &q[i]);
    }
    avg(q, num + num2);
}

void avg(int *p, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + p[i];
    }
    float avg1 = (float)sum / k ;
    printf("The average of the array elements is %.2f.\n", avg1);
}