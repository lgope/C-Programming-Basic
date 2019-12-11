#include<stdio.h>

int main()
{
    int x;

    printf("Please enter a number: ");
    scanf("%d", &x);


    if((x & 1) == 1)
    {
        printf("%d is odd\n", x);
    }

    else
    {
        printf("%d is even\n", x);
    }

    return 0;
}
