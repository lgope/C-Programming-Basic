#include<stdio.h>
#include<string.h>
int main()
{
    char id[15];
    char name[15];
    gets(id);
    gets(name);
    printf("%d", strlen(id));
}
