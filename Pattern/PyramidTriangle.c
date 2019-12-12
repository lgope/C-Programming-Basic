#include<stdio.h>
int main()
{
    system("color 0f2");
    int row, col, spc, x = 1;
    for(row = 1; row <= 3; row++)
    {
        for(spc = 2; spc >= row; spc--)
        {
            printf(" ");
        }
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }

        printf("\n");
        x = x + 2;

    }
    return 0;
}
