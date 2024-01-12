/*Write a function that receives 5 integers and returns the sum, average
and standard deviation of these numbers. Call this function from main( )
and print the results in main( ).*/
//gcc exe3.c -lm to compile the program .
#include <stdio.h>
#include <math.h>
void func(int, int, int, int, int, int *, float *,double *);
int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter the 5 numbers :");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int sum;
    float avg;
    double sd;
    func(num1, num2, num3, num4, num5, &sum, &avg, &sd);
    printf("The sum of the numbers is %d \n.",sum);
    printf("The average of the numbers is %f\n.",avg);
    printf("The sd of the numbers is %lf \n.",sd);
    return 0;

}
void func(int a, int b, int c, int d, int e, int *x, float *y, double *z)
{
    *x = (a + b + c + d + e);
    *y = (*x) / 5;
    *z = sqrt((pow((a - *y), 2.0) + pow((b - *y), 2.0) +
                   pow((c - *y), 2.0) + pow((d - *y), 2.0) +
                   pow((e - *y), 2.0)) /
                  4);
}