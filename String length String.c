#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, count = 0;
    char ch[100];

    gets(ch);
    int len = strlen(ch);

    for(i = 1; i < len-1; i++)
    {
        count++;
    }

    printf("%d\n", len);
    printf("%c%d%c", ch[0], count, ch[len-1]);

    return 0;
}
