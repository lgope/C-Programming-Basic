#include<stdio.h>

int main()
{
    int t, i, n, count;
    while(scanf("%d", &t) != EOF)
    {
        for(i = 0, count = 0; i < 5; i++)
        {
            scanf("%d", &n);
            if(t == n)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
