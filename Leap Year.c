#include<stdio.h>
int main()
{
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    if(year % 400 == 0)
    {
        printf("\n%d It's Leap Year.\n", year);
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("\n%d It's Leap Year.\n", year);
    }
    else
    {
        printf("\n%d It's Not Leap Year.\n", year);
    }
    return 0;
}
