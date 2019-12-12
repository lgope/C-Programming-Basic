#include<stdio.h>
int main()
{
    system("color 0f2");  // change the console color
    int row, spc, col, x = 3;
    for(row = 1; row <= 2; row++)
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
    return 0;
}
