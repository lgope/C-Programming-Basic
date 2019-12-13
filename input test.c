#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    printf("Press any key.\n");
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
            printf("The character is numeric.\n");
        }
        return 0;
}
