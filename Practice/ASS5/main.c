#include<stdio.h>
#include<stdlib.h>
#include"header.h"


int main()
{
    int num;
    printf("Enter the number of students :");
    scanf("%d",&num);
    struct  Student *s;
    s=(struct Student * )malloc(num*sizeof(struct Student ));
    int choice,i=0;
    do
    {
        printf("  MENU: \n");
        printf("1. ADD \n");
        printf("2. DISPLAY\n");
        printf("3. SEARCH \n");
        printf("4. MODIFY \n");
        printf("Enter the choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if(i==num)
            {
                printf("The stack is full .\n");
            }
            else
            {
                accept(s,i);
                i++;
            }
            break;
        case 2:
            if(i==0)
            {
                printf("The stack is empty .\n");
            }
            else
            {
                display(s,i);
            }
        default:
            break;
        }
    } while (1);
    

   
}