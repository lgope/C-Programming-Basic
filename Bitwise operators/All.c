#include<stdio.h>

int main()
{
    int a = 40;
    int b = 20;
    int c;

    c = a & b;
    printf("%d\n", c);

    c = a | b;
    printf("%d\n", c);

    c = a ^ b;
    printf("%d\n", c);

    c = a != b;
    printf("%d\n", c);

    c = a << b;
    printf("%d\n", c);

    c = a >> b;
    printf("%d\n", c);

    return 0;
}
