#include<stdio.h>
int main()
{
    double a1, a2, b1, b2, c1, c2, d, x, y;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);
    d = (a1 * b2 - a2 * b1);
    if ((int) d == 0) {
        printf("Value of x and y can not be determind. \n");
        }
        else  {
        x = (b2 * c1 - b1 *c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
        printf("%.2lf %.2lf", x, y);
        return 0;
    }
}
