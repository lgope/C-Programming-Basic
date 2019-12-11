#include<stdio.h>
int sum (int a, int b, int c)
{
    printf("The sum is : %d\n", a+b+c);
}
int sub (int a, int b)
{
    printf("The subtraction is : %d\n", a - b);
}
int main()
{
    sum(10, 20, 30);
    sum(100, 400, 400);
    sub(500, 112);
}


