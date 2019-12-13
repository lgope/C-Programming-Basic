#include<stdio.h>
int main()
{
    system("color 0f2");
    int a, b, sum = 0;
    scanf("%d", &b);
    for(a = 2; a <= b; a = a + 2)
    {
        printf(" %d ", a);
        sum = sum + a;

    }
    printf("\n\n%d\n\a", sum);
}
