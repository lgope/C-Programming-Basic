#include<stdio.h>
int main()
{
    int n, j;
    for(n = 1; n <= 6; n++)
    {
        for(j = 1; j <= n; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
