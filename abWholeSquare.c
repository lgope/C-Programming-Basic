#include<stdio.h>
#include<windows.h>
int main()
{
    system("color 3f");
    int a, b, c;
    printf("Enter integer value for a : ");
    scanf("%d", &a);
    printf("Enter integer value for b : ");
    scanf("%d", &b);
    c = (a * a) + (2 * a * b) + (b * b);
    printf("c = %f", c);
    return 0;
}
