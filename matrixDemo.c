#include<stdio.h>
int main()
{
    int a[4][4], s = 0;
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 4; i++)
    {
        printf("\t");
        for(j = 0; j < 4; j++)
        {
            s = s + a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("%d", s);
        s = 0;
        printf("\n");
    }
    return 0;
}
