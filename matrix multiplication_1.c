#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10];
    int row, col, r, c, r1, c1;
    printf("Enter rows and columns for the first matrix : \n");
    scanf("%d %d", &r, &c);

    printf("Enter rows and columns for the second matrix : \n");
    scanf("%d %d", &r1, &c1);
    while(c != r1)
    {
        printf("error !!\n");
        printf("First matrix column and second matrix row are not equal.\n");

        printf("Enter rows and columns for the first matrix : \n");
        scanf("%d %d", &r, &c);

        printf("Enter rows and columns for the second matrix : \n");
        scanf("%d %d", &r1, &c1);
    }
    printf("Enter elements for first matrix.\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            printf("first[%d][%d] = ", row, col);
            scanf("%d", &first[row][col]);
        }
        printf("\n");
    }


    printf("Enter elements for second matrix.\n");
    for(row = 0; row < r1; row++)
    {
        for(col = 0; col < c1; col++)
        {
            printf("second[%d][%d] = ", row, col);
            scanf("%d", &second[row][col]);
        }
        printf("\n");
    }


    printf("\n\nFisrt Matrix:\n");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < r; col++)
        {
            printf("%d ",first[row][col]);
        }
        printf("\n\n");
    }

    printf("\n\nSecond Matrix:\n");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < r; col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n\n");
    }

}
