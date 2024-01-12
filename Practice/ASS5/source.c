#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void accept(struct Student *s,int i)
{
    printf("Enter the roll no :");
    scanf("%d",&s[i].rollno);
    printf("Enter the name:");
    scanf("%s",s[i].name);
    printf("Enter the percentage :");
    scanf("%f",&s[i].percentage);
    printf("Enter the catergory 0.PRIMARY 1.SECONDARY :");
    scanf("%d",&s[i].catg);

}

void display(struct Student *s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Roll No :%d",s[i].rollno);
        printf("Name :%s",s[i].name);
        printf("Percentage :%.2f",s[i].percentage);
        switch (s[i].catg)
        {
        case 0:
            printf("The category is primary .\n");
            break;
        case 1:
            printf("The catergory is secondary .\n");
            break;
        }

    }
}