#include<stdio.h>
void tes_function(int ara[])
{
    ara[0] = 100;
    return;
}
int main()
{
    int ara[] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);
    tes_function(ara);
    printf("%d\n", ara[0]);
    return 0;
}
