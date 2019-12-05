#include<stdio.h>
int main()
{
    system("color 3f");
    int n, i, j;
    scanf("%d", &j);
    for(n = 1; n <= j; n = n + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
}
