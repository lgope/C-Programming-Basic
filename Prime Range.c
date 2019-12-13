#include<stdio.h>

int main()
{
    int list[] = {2, 3, 5, 7, 11, 13};

    int n, x, y, i, j = 0;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d%d", &x, &y);
        int sum = 0;

        for(i = x-1; i <= y-1; i++)
        {
            sum += list[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}
