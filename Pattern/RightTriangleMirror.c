#include<stdio.h>
int main()
{
    int row, spc, col, x = 5;
    for(row = 1; row <= 5; row++)
    {
        for(spc = 1; spc < row; spc++)
        {
            printf(" ");
        }
        for(col = x; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
        x = x - 1;
    }
    x = 2;
    for(row = 1; row <= 4; row++)
    {
        for(spc = 3; spc >= row; spc--)
        {
            printf(" ");
        }
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = x + 1;
    }
    return 0;
}
