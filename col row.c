#include<stdio.h>
int main()
{
    int a[3][3], b[3][3];
    int row, col;

    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }


    printf("\n\n");
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("%d ", a[row][col]);
        }

        printf("\n");
    }


    printf("\n\n");
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("%d ", a[col][row]);
        }

        printf("\n");
    }
}
