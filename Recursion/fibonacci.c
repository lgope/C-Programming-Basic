#include<stdio.h>

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int loopfib()
{
    int j, i, fi[100];

    scanf("%d", &j);

    fi[0] = 1;
    fi[1] = 1;

    for(i = 2; i < j; i++)
    {
        fi[i] = fi[i - 1] + fi[i - 2];
    }

    for(i = 0; i < j; i++)
    {
        printf("%d ", fi[i]);
    }

}

int main()
{
    int n;
    char s[3];

    scanf("%d", &n);

    if(n == 1)
    {
        strcpy(s, "st");
    }

    else if(n == 2)
    {
        strcpy(s, "nd");
    }

    else if(n == 3)
    {
        strcpy(s, "rd");
    }

    else
    {
        strcpy(s, "th");
    }

    printf("%d%s fibonacci number is : %d\n", n, s, fib(n));

    loopfib();

    return 0;
}
