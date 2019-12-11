#include<stdio.h>

int main()
{
    int x = 10, y = 40, sum;

    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("Sum = %d\n", sum);

    getch();
    return 0;
}
