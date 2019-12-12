#include<stdio.h>
#include<math.h>

int main()
{
    int n, rem, num = 0, i = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        rem = n % 10;
        num = num + rem*pow(2,i);
        i++;
        n = n / 10;
    }
    printf("Decimal number is %d\n", num);
    return 0;
}
