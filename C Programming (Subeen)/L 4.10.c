#include<stdio.h>
int main()
{
    int n, i,j;
    for(n = 1; n <= 20; n = n + 1) {
            j = 0;
        for(i = 1; i <= 10; i = i + 1) {

                j = j + n;

            printf("%d x %d = %d\n", n, i, j);
        }
    }
    return 0;
}
