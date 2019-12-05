#include<stdio.h>
int main()
{
    int n, j, i, sum = 0, f;
    scanf("%d", &n);
    for(j = 1; j <= n; j++)
    {
        f = 1;
        for(i = 1; i <= j; i++)
        {
            f = f * i;
        }
        printf("%d!", j);
        if(j < n)
        {
            printf(" + ");
        }
        sum = sum + f;
    }
    printf(" = %d\n", sum);
    return 0;
}
