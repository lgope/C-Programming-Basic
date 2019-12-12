#include<stdio.h>

int main()
{
    int y, a, b, c, d;
    scanf("%d", &y);

    while(1)
    {
        y++;

        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }

    printf("%d\n", y);

    return 0;
}
