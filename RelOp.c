#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("Less Than (<) operator: /n");
    printf("\t x < y : %d\n", x < y);
    printf("\t y < x : %d\n", y < x);

    printf("Less Than Or Equal To (<=) operator: /n");
    printf("\t x <= y : %d\n", x <= y);
    printf("\t y <= x : %d\n", y <= x);

    printf("Greater Than (>) operator: /n");
    printf("\t x > y : %d\n", x > y);
    printf("\t y > x : %d\n", y > x);

    printf("Greater Than Or Equal To (>=) operator: /n");
    printf("\t x >= y : %d\n", x >= y);
    printf("\t y >= x : %d\n", y >= x);

    printf("Equal To (==) operator: /n");
    printf("\t x == y : %d\n", x == y);
    printf("\t y == z : %d\n", y == z);

    printf("Not Equal To (!=) operator: /n");
    printf("\t x != y : %d\n", x != y);
    printf("\t y != z : %d\n", y != z);

    return 0;
}
