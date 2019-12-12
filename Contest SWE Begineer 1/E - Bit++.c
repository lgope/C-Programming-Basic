#include<stdio.h>
#include<string.h>

int main()
{
    int n, x = 0;
    char bit[5];
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", bit);

        if(bit[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    printf("%d\n", x);
}
