#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter 2 integer value: ");
    scanf("%d %d", &a, &b);
    c = (a - b) * (a + b);
    d = (a * a) + (2 * a * b) + (b * b);
    e = (a * a) - (2 * a * b) + (b * b);
    f = (a - b) * ((a * a) + (a * b) + (b * b));
    g = (a - b) * (a + b) * ((a * a) + (b * b));
    printf(" c = %d\n d = %d\n e = %d\n f = %d\n g = %d\n", c, d, e, f, g);
}
