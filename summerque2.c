#include<stdio.h>
int main()
{
    double h;
    scanf("%lf", &h);
    if(h >= 4)
    {
        printf("He can be a excellent programmer.");
    }
    else if(h >= 3)
    {
        printf("He can be a good programmer.");
    }
    else if(h > 2)

    {
        printf("He can be a normal programmer.");
    }
    else
    {
        printf("He can not be a programmer.");
    }
    return 0;
}
