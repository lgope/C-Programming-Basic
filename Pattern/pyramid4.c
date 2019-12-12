#include<stdio.h>
int main()
{
    int n, i, j = 1;
    for(n = 1; n <= 4; n++)
    {
        for(i = 1; i <= n; i++)
        {
            printf("%d",j);
                 j++;

        }

        printf("\n");

    }
    return 0;
}
