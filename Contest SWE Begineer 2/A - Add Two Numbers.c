#include<stdio.h>

int main()
{
    int t, a, b, res;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);

        res = a + b;

        printf("%d\n", res);
    }

    return 0;
}