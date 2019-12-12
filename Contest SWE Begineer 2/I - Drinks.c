#include<stdio.h>

int main()
{
    int  t;
    double a, sum = 0;
    scanf("%d", &t);
    int n = t;

    while(t--)
    {
        scanf("%lf", &a);

        sum += a;
    }

    printf("%lf\n", sum / n);

    return 0;
}
