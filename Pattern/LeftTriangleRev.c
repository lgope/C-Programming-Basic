#include<stdio.h>
int main()
{
    system("color 0f2");   // change the console color
    int row, col, spc, x = 4;
    for(row = 1; row <= 4; row = row + 1)
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
}
