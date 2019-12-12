#include<stdio.h>
int main()
{
    int row, col, x = 1;
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = x  + 2;
    }
    x = 7;
    for(row = 1; row <= 4; row++)
    {
                        for(col = x; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
        x = x  - 2;
    }
}
