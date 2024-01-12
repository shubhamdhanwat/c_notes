#include <stdio.h>
void check_character(char);

int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    check_character(ch);
    return 0;
}

void check_character(char ch)
{
    // if (ch >= 'A' && ch <= 'Z')
    if (ch >= 65 && ch <= 90)
    {
        printf("The character is in upper case :%c\n", ch);
        ch = ch + 32;
        printf("The character coverted to lower case :%c\n", ch);
    }
    // else if (ch >= 'a' && ch <= 'z')
    else if (ch >= 97 && ch <= 122)
    {
        {
            printf("The character is in Lower case :%c\n", ch);
            ch = ch - 32;
            printf("The character coverted to Upper case :%c\n", ch);
        }
    }
    // else if (ch >= '0' && ch <= '9')
    else if (ch >= 48 && ch <= 57)
    {
        printf("The character is the digit %c .\n", ch);
    }
    else
    {
        printf("The character is special symbol %c .\n", ch);
    }
}