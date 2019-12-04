#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10], mul = 1;
    int row, col, r, c;


    printf("Input value for Rows and Cols:\n");
    scanf("%d %d", &r, &c);


    printf("Input value for A matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("a[%d][%d] = ", row, col);
            scanf("%da[row][col]", &a[row][col]);
        }
        printf("\n");
    }


    printf("A = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            mul = mul*a[row][col];
            printf("%d ", a[row][col]);
        }
        printf("%d", mul);
            mul = 1;
        printf("\n");
    }

    getch();
    return 0;
}


