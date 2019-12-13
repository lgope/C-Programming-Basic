#include<stdio.h>
int main()
{
    system("color 3f");
    int year;
    scanf("%d", &year);
    if((year % 4) == 0)
        if((year % 100) != 0)
        printf("\n%d is a LEAP YEAR.", year);
            else
            if((year % 400) == 0)
            printf("\n%d is a LEAP YEAR.", year);
    else
        printf("\n\a%d is not a LEAP YEAR.", year);
    else
        printf("\n\a%d is not a LEAP YEAR.\n", year);
}
