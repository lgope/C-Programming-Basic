#include<stdio.h>
int main()
{
    int a, b, c, d, e, j;
    scanf("%d", &j);
    for(a = 1; a <= j; a++) {
        for(b = 1; b <= j; b++) {
            for(c = 1; c <= j; c++) {
               for (d = 1; d <= j; d++) {
                    for (e = 1; e <= j; e++) {
                     if (b != a && c != a && c != b && d != a && d != b && d != c && e != a && e != b && e != c && e != d) {
                        printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, j);
                     }
                    }
                }
            }
        }
    }
    return 0;
}
