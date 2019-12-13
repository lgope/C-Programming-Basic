#include<stdio.h>
int main()
{
    system("color 0f2");
    int row, spc, col, x = 5;
    for(row = 1; row <= 4; row++)
    {
        printf("      ");
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = 1;
        spc = 0;
    }
    x = 3;
    for(row = 1; row <= 4; row++)
    {
        printf("      ");
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = 1;
    }
    x = 5;
    for(row = 1; row <= 1; row++)
    {
        for(spc = -4; spc <= row; spc++)
        {
            printf(" ");
        }
        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    getch();
    return 0;
}
