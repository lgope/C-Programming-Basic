#include<stdio.h>

int main()
{
    int n;

    while(1)
    {
        scanf("%d", &n);
        if(n > 99)continue;
        if(n == 42)break;

        printf("%d\n", n);
    }

    return 0;
}
