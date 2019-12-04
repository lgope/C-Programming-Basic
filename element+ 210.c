#include<stdio.h>
int main()
{
    int a[10][10];
    int n, i, r, c, x, sum = 0;


    printf("Input value for Rows and Cols:\n");
    scanf("%d %d", &n, &i);


    printf("Please enter elements for A matrix:\n");
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


    x = n-1;
    printf("Selected elements are:\n");
    for(r = 0; r < n; r++)
    {
        for(c = x; c <= x; c++)
        {
            printf(" %d ", a[r][c]);
            sum = sum + a[r][c];
        }
        printf("\n");
        x--;
    }
    printf("The sum of elements: = %d\n\n", sum);
    return 0;
}


