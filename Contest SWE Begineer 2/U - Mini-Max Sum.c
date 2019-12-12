#include<stdio.h>

int main()
{
    int a[5], i, sum = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int max = a[0], mini = a[0];

    for(i = 0; i < 5; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }

        if(mini > a[i])
        {
            mini = a[i];
        }
    }

    max = sum - mini;
    mini = sum - max;

    printf("%d %d\n", mini, max);

    return 0;
}
