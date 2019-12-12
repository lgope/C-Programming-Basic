#include<stdio.h>
int main()
{
    system("color 0f2");  // change the console color
    int row, spc, col, x = 7;
    for(row = 1; row <= 4; row++)
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
        x = x - 2;
    }
        x=3;
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
}
