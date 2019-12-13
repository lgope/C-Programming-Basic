#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Please input number1: ");
    scanf("%d",&a);

    printf("Please input number2: ");
    scanf("%d",&b);

    c=a%b;


    printf("Mod of number1: %d & number2: %d is: %d",a,b,c);
    //printf("%d",c);
    return 0;
}
