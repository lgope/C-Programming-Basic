#include<stdio.h>
int main()
{
    int n, i, m = 0, k = 0, L;
    for(n = 1; n <= 20; n = n + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", n, i, n*i);
        }
    }
    return 0;
}
