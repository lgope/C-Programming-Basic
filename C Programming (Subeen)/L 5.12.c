#include<stdio.h>
int main()
{
    double celsius, farenheit;
    printf("Please enter the temperature in celsius: ");
    scanf("%lf", &celsius);
    farenheit = (celsius * 1.8) + 32;
    printf("The temperature in farenheit is: %.2lf\n", farenheit);
    return 0;
}
