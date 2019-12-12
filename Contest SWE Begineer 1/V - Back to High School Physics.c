#include<stdio.h>

int main()
{
    int a, b;

    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", 2*a*b);
        }
    }

    return 0;
}
