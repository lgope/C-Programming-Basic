#include<stdio.h>
int main()
{
    int x = 10, a = 5, b = 15;
    printf("  --x   --a   --b\n");
    printf("  -----------------\n");
    while(--a, --b, --x)
    {
        printf("%5d %5d %5d\n", x, a, b);
    }

}
