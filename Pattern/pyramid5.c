#include<stdio.h>
int main()
{
    int n, j;
    for(n = 1; n <= 4; n++)
    {
        for(j = 1; j <= n; j++)
        {
            printf(" %d", n*j);
        }
        printf("\n");
    }
}
