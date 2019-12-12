#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i;

    gets(ch);
    for(i = 0; i < strlen(ch); i++)
    {
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
