#include<stdio.h>

int main()
{
    long long int m, n, a, l, k;
    scanf("%lld %lld %lld", &m, &n, &a);

    l = n / a;
    k = m / a;

    if(n%a != 0)l++;
    if(m%a != 0)k++;

    printf("%lld\n", l*k);

    return 0;
}
