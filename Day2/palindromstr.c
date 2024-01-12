#include <stdio.h>
#include <string.h>

int palindrom_str(char ch[])
{
    int size = strlen(ch) - 1;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (ch[size - i] != ch[k + i])
        {
            printf("not palindrom.");
        }
    }
    printf("palindrom");

    return 0;
}

int main()
{
    char ch[100];
    printf("Enter the string :");
    scanf("%s", ch);
    palindrom_str(ch);
    // printf("%s",ch);
    return 0;
}