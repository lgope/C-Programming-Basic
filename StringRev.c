#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter your string\n");
    gets(ch);
    strrev(ch);
    puts(ch);
}
