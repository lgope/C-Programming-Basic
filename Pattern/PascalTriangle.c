#include<stdio.h>

int main()
{
    int row, col, i = 1, j, k, l, spc;

    for(row = 0; row < 5; row++)
    {
        for(spc = 5; spc > row; spc--)
            printf(" ");

        i = 1;

        for(col = 0; col <= row; col++)
        {
            printf(" %d", i);
            i = i * (row-col) / (col + 1);
        }

        printf("\n");
    }

    return 0;
}
