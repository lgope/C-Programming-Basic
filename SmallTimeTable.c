#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Input any integer number : ");
    scanf("%d", &c);
    for(a = 1; a <= c; a = a + 1)
    {
        for(b = 1; b <= 10; b = b + 1)
        {
            d = a * b;
            printf("%d x %d = %d", a, b, d);
        }
    }
}
