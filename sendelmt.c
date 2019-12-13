#include<stdio.h>
int func_elmnt(int num_1, int num_2);
int main()
{
    int x, iphone[5] = {5, 6, 7, 8, 9};
    x = func_elmnt(iphone[1], iphone[4]);
    printf("\n Return value is: %d\n", x);
    return 0;
}
int func_elmnt(int num_1, int num_2)
{
    int y;
    y = num_1 + num_2;
    return y;
}
