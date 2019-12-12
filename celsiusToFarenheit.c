#include<stdio.h>
int main()
{
    float celsius, farenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    farenheit =(celsius + 32) * 1.8;
    printf("Temperature in farenheit is: %f\n", farenheit);
}
