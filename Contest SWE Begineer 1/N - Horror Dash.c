#include<stdio.h>

int main()
{
    int t, i, c[100];
    int n, k = 1;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
        }
        int big = c[0], l;
        for(i = 0; i < n; i++)
        {
            if(big < c[i])
            {
                big = c[i];
            }
        }
        printf("Case %d: %d\n", k, big);
        k++;
    }

    return 0;
}
