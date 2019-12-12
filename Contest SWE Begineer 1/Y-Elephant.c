#include<stdio.h>

int main()
{
    int n, r, count;
    scanf("%d", &n);

    r = n / 5;
    if(n == (r*5))
    {
        count = r;
    }

    else
    {
        count = r + 1;
    }

    printf("%d\n", count);

    return 0;

}
