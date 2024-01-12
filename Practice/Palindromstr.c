#include <stdio.h>
#include <string.h>
int check_palindrom(char []);

void main()
{
    char str[100];
    printf("Enter the string :");
    scanf("%s", str);
    int ans = check_palindrom(str);
    {
        if (ans == 1)
        {
            printf("The %s is the palindrom string.\n", str);
        }
        else
        {
            printf("The %s is not the palindrom string.\n", str);
        }
    }
}

int check_palindrom(char ch[])
{
    int len = strlen(ch) - 1;
    for (int i = 0; i  <=len / 2; i++)
    {
        if (ch[i] == ch[len - i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}