#include <stdio.h>
// void calculate()
void calculate(int r, float *area, float *perimeter)
{
    *area = 3.14 * r * r;
    *perimeter = 2 * 3.14 * r;
}

int main()
{
    int r;
    printf("Enter the radius of the circle :");
    scanf("%d", &r);
    float area, perimeter;
    calculate(r, &area, &perimeter);
    printf("\n%.2f  \n%.2f", area, perimeter);
}
