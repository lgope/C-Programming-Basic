#include<stdio.h>
int main()
{
    int a[10], i, n, temp;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The sequence of array.\n");
    for(i = 0; i <= 9; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    temp = a[1];
    a[1] = a[8];
    a[8] = temp;
    printf("After exchange.\n");
    for(i = 0; i <= 9; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
