#include<stdio.h>

int gcd_calculation(int num1, int num2)
{
    if (num2 != 0)
        return gcd_calculation(num2, num1 % num2);
    else
        return num1;
}

int main()
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("G.C.D of %d and %d is %d.\n", num1, num2, gcd_calculation(num1, num2));
    return 0;
}
