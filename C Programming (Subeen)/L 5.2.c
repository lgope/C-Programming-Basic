#include<stdio.h>
int main()
{
    double a1 = 4, a2 = 5, b1 = 5, b2 = 6, c1 = 14, c2 = 17, x, y;

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("%.2lf %.2lf", x, y);
    return 0;
}
