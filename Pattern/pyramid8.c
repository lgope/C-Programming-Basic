#include<stdio.h>
int main()
{
    int n, j;
    for(n = 'E'; n >= 'a'; n--)
    {
        for(j = n; j >= 'A'; j++)
        {
            printf(" %c", n);
        }
        printf("\n");
    }
}
