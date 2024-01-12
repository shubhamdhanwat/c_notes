#include <stdio.h>
#include <stdlib.h>
void display(int *, int);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    int *p = NULL;
    p = (int *)calloc(num, sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &p[i]);
    }
    display(p, num);
    free(p);
    display(p, num);
    return 0;
}
void display(int *q, int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("%d ", *(q + i));
    }
    printf("\n");
}