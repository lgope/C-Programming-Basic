#include<stdio.h>

int sum(int a, int b)
{
    int total;
    total = a + b;
    return total;
}

int main()
{
    int a1, a2, add;
    scanf("%d %d", &a1, &a2);

    add = sum(a1, a2);

    printf("\nThe sum is : %d\n", add);

    return 0;
}
