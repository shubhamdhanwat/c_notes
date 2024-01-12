#include<stdio.h>
float centigrade(float fahrenheit)
{
    float ans=(fahrenheit-32)*5/9;
    return ans;
}
int main()

{
    float fah;
    printf("Enter the fahrenheit :");
    scanf("%f",&fah);
    printf("The fahrenheit %f to celcius is %.2f",fah,centigrade(fah));
    return 0;

}