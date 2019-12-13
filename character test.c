#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    printf("Enter any key: ");
    putchar('\n');
    character = getchar();
    if(isalpha(character))
    {
        printf("The character is a latter.\n");
    }
    else if(isdigit(character))
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is not alphanumeric.\n");
    }
    return 0;
}
