#include <stdio.h>
#include <stdlib.h>
void display(int *, int);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int *p = NULL;
    p = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &p[i]);
    }
    display(p, num);
    free(p); // free the memory.
    printf("Enter the number :");
    scanf("%d", &num);
    p = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &p[i]);
    }
    display(p, num);
    free(p);
    display(p, num);
}

void display(int *q, int n)
{
    printf("The array of elements is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}