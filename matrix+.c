#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], s[3][3];
    int row, col, r, c;


    printf("Input value for Rows and Cols:\n");
    scanf("%d %d", &r, &c);


    printf("Input value for A matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("a[%d][%d] = ", row, col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }


    printf("Input value for B matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("b[%d][%d] = ", row, col);
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }


    printf("A = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }


    printf("\n");
    printf("B = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", b[row][col]);
        }
        printf("\n");
    }


    printf("\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {

            s[row][col] = a[row][col] + b[row][col];
        }

    }


    printf("S = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", s[row][col]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
