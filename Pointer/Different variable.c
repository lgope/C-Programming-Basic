#include<stdio.h>

int main()
{
    int x = 10, y = 20, z = 40;

    int *ptr;

    ptr = &x;
    printf("x = %d\n", *ptr);

    ptr = &y;
    printf("y = %d\n", *ptr);

    ptr = &z;
    printf("z = %d\n", *ptr);

    getch();
    return 0;

}
