#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    long long int arr[n], sum = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

        sum = sum + arr[i];
    }

    printf("%lld\n", sum);

    return 0;
}
