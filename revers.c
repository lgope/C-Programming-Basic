#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    strrev(name);
    printf("%s\n", name);
    return 0;
}
