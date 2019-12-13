#include<stdio.h>

int main()
{
    int i, value, index, n;
    printf("Enter size of array.\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of array.\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements are.\n");

    for(i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    printf("Enter new value: ");
    scanf("%d", &value);

    printf("\nEnter index. ");
    scanf("%d", &index);

    for(i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = value;

    for(i = 0; i < n+1; i++)
    {
        printf("%d = %d\n", i, a[i]);
    }

    return 0;
}
