#include<stdio.h>
double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}
int main()
{
    double a = 2.8, b = 2.7, c;
    c = add(a, b);
    printf("%lf\n", c);
    return 0;
}
