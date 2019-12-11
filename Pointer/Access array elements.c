#include<stdio.h>

int main()
{
    int ara[5] = {50, 60, 70, 80, 90};

    int *ptr, i;

    ptr = &ara[0];

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    getch();
}
