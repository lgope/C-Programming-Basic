#include<stdio.h>

int main()
{
    int t, i, a, b, c, sum;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a!=0 && b!=0 && c!=0 && a+b+c == 180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
