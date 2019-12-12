#include<stdio.h>

int main()
{
    int n, j, i, p = 0;
    scanf("%d %d", &n, &j);
    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= arr[j-1] && arr[i] > 0)
        {
            p++;
        }
    }

    printf("%d\n", p);

    return 0;
}
