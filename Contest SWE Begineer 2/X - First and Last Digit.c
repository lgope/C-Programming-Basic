#include<stdio.h>

int main()
{
    int n, t;

    scanf("%d", &t);

    while(t--)
    {
        int sum = 0, last = 0;

        scanf("%d", &n);

        last = n % 10;

        while(n != 0)
        {

            n = n / 10;
            if(n < 10)break;
        }

        sum = n + last;
        printf("%d\n", sum);
    }

    return 0;
}
