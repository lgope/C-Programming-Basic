#include<stdio.h>
int main()
{
    int i = 0, n, sum = 0;
    scanf("%d", &n);

    while (i < n) {
            i = i + 1;
        sum = sum + i;
    }
        printf("Summation is %d\n", sum);
    return 0;
}
