#include<stdio.h>

int a()
{
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);
}

int main()
{
    a();
    getch();
    return 0;
}
