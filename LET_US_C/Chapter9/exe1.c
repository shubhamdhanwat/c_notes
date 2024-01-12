#swap number by passing address in the function .
#include <stdio.h>

void swap(int *, int *);
int main()
{
    int num1, num2;
    // int *j=&num1;
    // int *k=&num2;
    printf("Enter two numbers num1 and num2 : ");
    scanf("%d%d", &num1, &num2);
    printf("The numbers before swap num1=%d and num2=%d.\n", num1, num2);
    // swap(j,k);
    swap(&num1, &num2);
    printf("The numbers after swap num1=%d and num2=%d.\n", num1, num2);
    return 0;
}
void swap(int *j, int *k)
{
    int temp = *j;
    *j = *k;
    *k = temp;
}