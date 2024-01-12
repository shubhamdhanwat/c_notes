#include <stdio.h>
float area_of_circle(int radius)
{
    return 3.14 * radius * radius;
}
float area_of_rectangle(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    printf("Enter the radius of circle and length and bredth of rectangle :");
    int rad, len, bre;
    scanf("%d%d%d", &rad, &len, &bre);
    printf("The area of circle is %.2f\n", area_of_circle(rad));
    printf("The area of rectangle is %.2f\n", area_of_rectangle(len, bre));
    return 0;
}