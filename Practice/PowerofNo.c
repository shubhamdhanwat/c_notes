#include <stdio.h>
double calculate_power(float, float);
int main()
{
    float base, expo;
    printf("Enter the base no and the exponential number :\n");
    scanf("%f%f",&base,&expo);
    printf("The power of %.2f raised to %.2f is %.2lf.\n", base, expo, calculate_power(base, expo));
}

double calculate_power(float base, float expo)
{
    double result = 1;
    for (int i = 0; i < expo; i++)
    {
        result = result * base;
    }
    return result;
}