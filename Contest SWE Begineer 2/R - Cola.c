#include<stdio.h>

int main()
{
    int n, i;

    while(scanf("%d", &n) == 1)
    {
        i = n;

        while(n >= 3)
        {
            i = i + (n/3);
            n = (n/3) + (n%3);
        }
        if(n == 2)
        {
            i++;
        }

        printf("%d\n", i);
    }

    return 0;
}
