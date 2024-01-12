#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3};
    int *p = arr;
    // printf("%d",*(p));
    // p++;
    //*(p + 2) = 27;
    *(arr + 2) = 30;
    // printf("%d",*(p));
    printf("%d", *(p + 2));

    // printf("%d",*(arr+1));
    // arr++;   // it is not allowed lvalue required 
    return 0;
}