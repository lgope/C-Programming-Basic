#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10], sum = 0;
    int row, col, r, c;


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


    printf("\n");
    printf("Selected elements are:\n");
    int x = r - 1;
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = x; col <= x; col++)
        {
            printf("%d ", a[row][col]);
            sum = sum + a[row][col];
        }
        printf("\n");
        x--;
    }
        printf("Sum = %d ", sum);
       getch();
       return 0;
}
