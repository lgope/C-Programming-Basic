#include<stdio.h>
int main()
{
    system("color 0f2");  // change the console color
    int row, spc, col, x = 1;
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
