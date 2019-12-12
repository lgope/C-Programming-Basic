#include<stdio.h>
int main()
{
    int n, j;
    for(n = 'A'; n <= 'E'; n++)
    {
        for(j = 'A'; j <= n; j++)
        {
            printf(" %c", n);
        }
        printf("\n");
    }
}

