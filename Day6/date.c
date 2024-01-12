#include<stdio.h>
void accept(int *p,int *q,int *r);
void accept(int *p,int *q,int *r)
{
    printf("Enter the day month year :");
    scanf("%d%d%d",p,q,r);

}


int main ()
{
    int d,m,y;
    accept(&d,&m,&y);
    printf("\n%d/%d/%d",d,m,y);
    return 0;
}