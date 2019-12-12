#include<stdio.h>

int main()
{
    int row, spc, col, n;
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        for(spc = 1; spc <= n-row; spc++)
        {
            printf(" ");
        }

        for(col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
