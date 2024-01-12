#include <stdio.h>
#include <string.h>

void string_reverse(char[]);
int main()
{
    char ch[100];
    printf("Enter the string :");
    scanf("%s", ch);
    string_reverse(ch);
    return 0;
}

void string_reverse(char ch[])
{
    int size = strlen(ch);
    int j = size - 1;
    char temp[j];

    for (int i = 0; i < size; i++)
    {
        temp[j] = ch[i];
        j--;
    }
    printf("%s", temp);
}
