#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], s[10][10], k = 0;
    int row, col, r, c;
    printf("Enter row and col number.\n");
    scanf("%d %d", &r, &c);

    printf("Enter value for A matrix.\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("a[%d][%d] = ", row, col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }

    printf("\nEnter value for B matrix.\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("b[%d][%d] = ", row, col);
            scanf("%d", &b[row][col]);
        }
        printf("\n\n");
    }

    printf(" A = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n\n");
    }

    printf("\n\n");
    printf(" B = ");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", b[row][col]);
        }
        printf("\n\n");
    }


    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            s[row][col] = a[row][col] + b[row][col];
        }
        printf("\n");
    }



    printf("\n\n");
    printf("A + B =");

    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            k = k + s[row][col];
            printf("%d ", s[row][col]);
        }
        printf("%d", k);
        printf("\n\n");
        k = 0;
    }

    printf("\n\n");

    /*printf(" Sum of rows of S matrix = \n");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            k = k + s[row][col];
            printf("%d", k);
        }
        printf("\n");
        k = 0;
    }*/
}
