#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10], spc, sum = 0;
    int row, col, r, c, i;
    printf("Input value for Rows and Cols:\n");
    scanf("%d %d", &r, &c);
    printf("Input value for A matrix:\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("a[%d][%d] = ", row, col);
            scanf("%db[row][col]", &a[row][col]);
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
    for(row = 1; row <= 1; row++)
    {
        for(spc = 5; spc >= row; spc--)
        {
            printf(" ");
        }
        for(col = 0; col < 5; col++)
        {
            printf("--");
        }
        printf("\n");
    }
    int x, j = 0, store[10], p, q;
    while(j < r)
    {
        x = j;
        printf("\t");
        for(row = 0; row < r; row++)
        {
            for(col = x; col <= x; col++)
            {
                sum = sum + a[row][col];
            }
            store[p] = sum;
        }

        j++;
    }

    for(q = 0; q < p; q++)
    {
        printf("\t");
        printf("%d", store[q]);
    }
    getch();
    return 0;
}


