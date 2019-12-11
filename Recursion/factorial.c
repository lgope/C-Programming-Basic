#include<stdio.h>

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int loopfac()
{
    int n, i, fac = 1;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fac = fac * i;
    }

    printf("Factorial = %d\n", fac);

}

int main()
{
    int n;

    scanf("%d", &n);

    if(n < 0)
    {
        printf("Undefined.\n");
        return 0;
    }

    printf("Factorial of %d is : %d \n", n, factorial(n));

    loopfac();

    return 0;
}
