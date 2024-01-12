#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the charcter :");
    scanf("%c", &ch);

    if (ch >='A' && ch <='Z')
    {
        ch = ch + 32;
        printf("The character in lower case :%c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("The character in upper case :%c\n", ch);
    }
    else
    {
        printf("The character is not an alphabet\n Enter the valid charcter.");
    }
    return 0;
}