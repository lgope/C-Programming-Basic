#include<stdio.h>
int A()
{
    printf("Hello World.\n");
}
int B()
{
    int a, b, sum = 0;
    printf("Input two integer number.\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}
int main()
{
    A();
    B();
    return 0;
}
