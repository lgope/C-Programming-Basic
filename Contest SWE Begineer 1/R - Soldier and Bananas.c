#include<stdio.h>

int main()
{
    long long int k, n, w, sum = 0, res;

    scanf("%lld %lld %lld", &k, &n, &w);

    for( int i = 1; i <= w; i++)
    {
        sum += k*i;
    }

    if(sum <= n)
    {
        res = 0;
    }
    else
    {
        res = sum - n;
    }

    printf("%lld\n", res);

    return 0;
}
