#include<stdio.h>
int main()
{
    int i, j, spc;
    for(i = 1; i <= 5; i++)
        {
            for(spc = 2; spc <= 2; spc++)
            {
                printf(" ");
            }
        for(j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i <= 5; i++)
    {
            for(spc = 2; spc <= 2; spc++)
            {
                printf(" ");
            }
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
