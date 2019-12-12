#include<stdio.h>
int main()
{
    int row, spc, col, x = 1;
    for(row = 1; row <= 4; row++)
    {
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = x + 1;
    }
    x = 3;
    for(row = 1; row <= 3; row++)
    {
        for(col = x; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
        x = x - 1;
    }
}
