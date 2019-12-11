#include<stdio.h>
int main()
{
    int a, b = 2, c = 0, sum = 0;
    for(a = 5; a <= 3125; a = a * 5)
    {
        printf("%d/%d", a, b);
        c = a / b;
        sum = sum + c;
        b += 2;
        if(a < 3125)
        {
            printf("+");
        }
    }
    printf("=%d\n\n", sum);
}
