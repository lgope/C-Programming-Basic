#include<stdio.h>

int main()
{
    int n, cas = 0;
    long long int  a, b, c;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%lld%lld%lld", &a, &b, &c);

        if(a+b <= c || b+c <= a || c+a <= b)
        {
            printf("Case %d: Invalid\n", ++cas);
        }
        else if(a == b && b == c)
        {
            printf("Case %d: Equilateral\n", ++cas);
        }
        else if(a == b || a == c || b == c)
        {
            printf("Case %d: Isosceles\n", ++cas);
        }
        else
        {
            printf("Case %d: Scalene\n", ++cas);
        }
    }

    return 0;
}
