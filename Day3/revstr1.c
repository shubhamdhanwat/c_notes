#include <stdio.h>
#include <string.h>

char reverse_Str(char ch[])
{
    int count = 0;
    int i = 0, j;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    j = count - 1;

    char rev[count];
    for (int i = 0; i < count; i++)
    {
        rev[i] = ch[j];
        j--;
    }

    return printf("%s", rev);
}
int main()
{
    char ch[100];
    printf("Enter the string  :");
    scanf("%s", ch);
    // printf("%s",ch);
    printf("%c", reverse_Str(ch));
    return 0;
}