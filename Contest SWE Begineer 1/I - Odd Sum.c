#include<stdio.h>

int main()
{
    int t, i, a, b, k = 1, sum = 0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        sum = 0;
        for(i = a; i <= b; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }

        printf("Case %d: %d\n", k, sum);
        k++;
    }

    return 0;
}
