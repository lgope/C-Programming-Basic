#include<stdio.h>
int main()
{
    int a[8], i;
    for(i = 0; i <= 7; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("After mid input.\n");
    for(i = 8; i >= 3; i--)
    {
        a[i] = a[i-1];
    }
    a[3] = 100;
    for(i = 0; i <= 8; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
