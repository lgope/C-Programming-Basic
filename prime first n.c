#include<stdio.h>
int main()
{
    int n, i, x = 2;
    int k = 1, l;

    scanf("%d", &l);
    while(k <= l)
    {
        scanf("%d", &n);
        printf("Caso %d ->", k);
        while(n)
        {
            for(i = 2; i < x; i++)
                if(x%i == 0)
                    break;
            if(i == x)
            {
                printf(" %d", x);
                n--;
            }
            x++;
        }
        k++;
        printf("\n");
        x = 2;
    }

    return 0;
}
