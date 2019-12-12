#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Input two integer valu: \n");
    scanf("%d %d", &a, &b);
    c = a / b;
    d = c * b;
    e = a - d;
    printf("\nRemainder = %d\n", e);
}
