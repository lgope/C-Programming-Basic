#include<stdio.h>
int main()
{
    int a[10], i, n;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The sequence of array.\n");
    for(i = 0; i <= 9; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("After reversing array.\n");
        for(i = 9, n = 0; i >=0; n++, i--)
        {
            printf("a[%d] = %d\n", n, a[i]);
        }

}
