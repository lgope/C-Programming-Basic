#include<stdio.h>
int main()
{
    int a[3][4], b[3][4];
    int row, col;


    printf("Please enter elements for A matrix:\n");
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 4; col++)
        {
            printf("a[%d][%d] = ", row,col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }


    printf("Please enter elements for B matrix:\n");
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 4; col++)
        {
            printf("b[%d][%d] = ", row,col);
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }


    printf("A = ");
    for(row = 0; row < 3; row++)
    {
        printf("\t");
        for(col = 0; col < 4; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n\n");
    }
    printf("\n");


    printf("B = ");
    for(row = 0; row < 3; row++)
    {
        printf("\t");
        for(col = 0; col < 4; col++)
        {
            printf("%d ", b[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}
