#include <stdio.h>
#include <string.h>

char reverse_string(char ch[])
{
    int size = strlen(ch) ;
    int temp = size-1;
    char rev[size];
    int i = 0;
    int j=0;
    for(int i=temp;i>=0;i--){
        rev[j]=ch[i];
        j++;
    }
    rev[size]='\0';

    for(int i=0;i<temp;i++){
        printf("%c",rev[i]);
    }
    
    return printf("%s",rev);
}
int main()
{
    char ch[100];
    printf("Enter the string :");
    scanf("%s",ch);
    printf("The reverse string is :%c", reverse_string(ch));
    return 0;
}