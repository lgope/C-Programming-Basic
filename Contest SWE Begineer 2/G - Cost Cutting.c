#include<stdio.h>

int main()
{
    int n, a, b, c, count = 0, res;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d%d%d", &a, &b, &c);

        if(b<a && a<c || b>a && a>c)
        {
            res = a;
        }
        if(a>b && b>c || a<b && b<c)
        {
            res = b;
        }
        if(a<c && b>c || a>c && b<c)
        {
            res = c;
        }

        printf("Case %d: %d\n", ++count, res);
    }

    return 0;
}
