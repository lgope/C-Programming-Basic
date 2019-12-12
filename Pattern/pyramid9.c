#include<stdio.h>
int main()
{
    int i, n;
    for(i = 'A'; i <= 'E'; i++)
    {
        for(n = 'E'; n >= i; n--)
        {
            printf(" %c", n);
        }
        printf("\n");
    }
}
