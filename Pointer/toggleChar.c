#include<stdio.h>

void toggleChar(char *ptr)
{
    int i;

    for(i = 0; *(ptr+i) != '\0'; i++)
    {
        if(*(ptr+i) >= 'A' && *(ptr+i) <= 'Z')
            *(ptr+i) = *(ptr+i) + 32;
        else if (*(ptr+i) >= 'a' && *(ptr+i) <= 'z')
            *(ptr+i) = *(ptr+i) - 32;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    toggleChar(str);
    printf("Toggled Characters : %s\n", str);

    return 0;

}
