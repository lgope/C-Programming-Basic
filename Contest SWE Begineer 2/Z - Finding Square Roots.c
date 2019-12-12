#include<stdio.h>
#include<math.h>

int main()
{
    int t, n, res;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        res = sqrt(n);
        printf("%d\n", res);
        res = 0;
    }

    return 0;
}
