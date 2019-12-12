#include<stdio.h>
double add(double x, double y);
int main()
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = add(a, b);
    printf("%lf\n", c);
    return 0;

}
double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
