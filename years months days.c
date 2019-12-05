#include<stdio.h>
int main()
{
    int input, year, months, days;
    printf("Input days: ");
    scanf("%d", &days);
    year = days / 365;
    int temp = days % 365;
    months = temp / 30;
    days = temp % 30;
    printf("Year = %d\nMonths = %d\nDays = %d\n", year, months, days);
    return 0;
}
