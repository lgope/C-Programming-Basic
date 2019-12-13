#include<stdio.h>
int main()
{
    int a2[30], n, i;

    printf("Enter the size of array.\n");
    scanf("%d", &n);

    int a1[n];
    printf("Enter elements of array.\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("\nArray 1:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a1[i]);
    }
    for(i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    printf("\n\nAfter copy.\n\nArray 2:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }
    getch();
    return 0;
}
