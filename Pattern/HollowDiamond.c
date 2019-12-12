#include<stdio.h>
int main()
{
    system("color 2f");   // console colore change
    int row, spc, col, x = 1;
    for(row = 1; row <= 5; row++)
    {
        for(spc = 5; spc > row; spc--)
        {
            printf(" ");
        }
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }

        for(spc = 2; spc <= (row - 1)* 2; spc++)
        {
            printf(" ");
        }
        if(row > 1)
        {
            printf("*");
        }
        printf("\n");

    }
    for(row = 1; row <= 4; row++)
    {
        for(spc = 1; spc < row + 1; spc++)
        {
            printf(" ");
        }
        for(col = x; col >= 1; col--)
        {
            printf("*");
        }
        for(spc = 4; spc >= (row - 1) * 2; spc--)
        {
            printf(" ");
        }
        if(row <= 3)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    getch();
}
