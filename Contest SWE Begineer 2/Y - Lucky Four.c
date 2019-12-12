#include<stdio.h>

int main()
{
    char ch[100];
    int t, i, count = 0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", ch);

        int len = strlen(ch);

        for(i = 0; i < len; i++)
        {
            if(ch[i] == '4')
            {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}
