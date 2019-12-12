#include<stdio.h>
int test_function(int x)
{
    int y = x;
    x = 2 * y;
    return(x * y);
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
