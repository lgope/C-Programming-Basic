#include<stdio.h>
int main()
{
    int n, j;
    for(n = 3; n <= 9; n++)
    {
        for(j = 9; j >= n; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

}
