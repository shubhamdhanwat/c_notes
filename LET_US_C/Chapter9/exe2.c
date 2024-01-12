#include<stdio.h>
void calc(int ,float*,float*);
int main()
{
    int radius;
    printf("Enter the radius of the circel :");
    scanf("%d",&radius);
    float area,perimeter;
    calc(radius,&area,&perimeter);
    printf("The area of the circel is :%.2f\n",area);
    printf("The perimeter of the circle is :%.2f\n",perimeter);
    return 0;

}
void calc(int a,float *b,float*p)
{
    *b=3.14*a*a;
    *p=2*3.14*a;

}
