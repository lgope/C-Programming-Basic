#include<stdio.h>

void doWork(int a, int b, int c, int *p, int *q)
{
    *p = a + b + c;

    if(a > b && a > c)
        *q = a;
    else if(b > c)
        *q = b;
    else
        *q = c;
}

int main()
{
    int x = 10, y = 90, z = 15, sum, max;

    doWork(x, y, z, &sum, &max);

    printf("Sum = %d\nMax = %d\n", sum, max);

    return 0;
}
