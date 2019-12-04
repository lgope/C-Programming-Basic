#include<stdio.h>
int main()
{
    int a[10][10];
    int n, i, r, c, x, mul = 1;


    printf("Input value for Rows and Cols:\n");
    scanf("%d %d", &n, &i);


    for(r = 0; r < n; r++)
    {
        for(c = 0; c < i; c++)
        {
            printf("a[%d][%d] = ", r, c);
            scanf("%d", &a[r][c]);
        }
        printf("\n");
    }


    printf("A = ");
    for(r = 0; r < n; r++)
    {
        printf("\t");
        for(c = 0; c < i; c++)
        {
            printf("%d ", a[r][c]);
        }
        printf("\n\n");
    }


    x = 0;
    printf("Selected elements are:\n");
    for(r = 0; r < n; r++)
    {
        for(c = x; c <= x; c++)
        {
            printf(" %d ", a[r][c]);
            mul = mul * a[r][c];
        }
        printf("\n");
        x++;
    }
    printf("The mul of elements: = %d\n\n", mul);
    return 0;
}




