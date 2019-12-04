#include<stdio.h>
int main()
{
    int i, j,n;
    scanf("%c", &n);
    for(i = 'A'; i <= n; i++)
    {
        for(j = 'A'; j <= i; j++)
        {
            printf("%c", j);
        }
          printf("\n");
    }

}
