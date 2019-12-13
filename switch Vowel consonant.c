#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter any type of character : \n");
    ch = getche();
    switch(ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("\n Your choice is vowel.\n");
        break;
    default:
        printf("\n Your choice is consonant.\n");
    }
    return 0;
}
