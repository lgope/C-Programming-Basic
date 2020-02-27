#include<stdio.h>

void displayName()
{
    char name[10], c[10];
    int i, len;

    printf("Input your name: ");
    scanf("%s", name);

    printf("Hi %s!\n", name);
}
int main()
{
    displayName();
    return 0;
}

