#include<stdio.h>
void funcx(int get_array[])   /* formal parametre (function definition) */
{
    int n;
    for(n = 0; n < 5; n++)

        printf("%d\n", get_array[n]);
    }
    int main()
    {
        int usa[5] = {10, 20, 30, 40, 50};
        funcx(usa); /* actual parametre (function calling) */
        return 0;
}
