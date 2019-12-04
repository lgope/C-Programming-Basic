#include<stdio.h>
int main()
{
    int a[2][2] = {5, 4, 4, 4};
    int b[2][2] = {6, 7, 4, 8};
    int c[2][2], i, j, k, multi;
    printf("Matrix A is:\n\t\t");
    for(i =0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);

        }
        printf("\n\n\t\t");
    }
    printf("\n\nMatrix B is:\n\t\t");
        for(i =0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n\n\t\t");
    }
    printf("\n\nMultiplication of matrix A and B is:\n\n\t\t");
    for(i =0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            multi = 0;
            for(k = 0; k < 2; k++)
            {
                multi = multi + a[i][k] * b[k][j];
                c[i][j] = multi;
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n\n\t\t");
    }
    getch();
    return 0;
}
