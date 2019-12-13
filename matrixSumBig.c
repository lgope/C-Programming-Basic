#include<stdio.h>
int main()
{
    int a[10][10], s = 0;
    int row, col, r, c;
    printf("Enter row and col number.\n");

    scanf("%d %d", &r, &c);

    printf("Enter elements for array.\n");
    for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }

    printf("\nA =");
    for(row = 0; row < r; row++)
    {
        printf("\t");
        for(col = 0; col < c; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n\n");
    }



     int  big = a[0][0];
     for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            if(big < a[row][col])
                big = a[row][col];
        }
    }


  for(row = 0; row < r; row++)
    {
        for(col = 0; col < c; col++)
        {
            s = s + a[row][col];
        }
        printf("\n");
    }

    printf("Sum = %d\n\n", s);
    printf("Largest value = %d\n", big);

}
