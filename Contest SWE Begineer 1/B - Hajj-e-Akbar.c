#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10];
    int i = 0;
    while(scanf("%s", ch))
    {
        if(!strcmp(ch, "*"))
        {
            break;
        }
        else if(strcmp(ch, "Hajj") == 0)
        {
            printf("Case %d: Hajj-e-Akbar\n", ++i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n", ++i);
        }
    }

    return 0;
}
