#include<stdio.h>
int main()
{
    char address[80];
    printf("Enter your addtess: ");
    scanf("%[^\n]", address);
    printf("%-80s", address);

    return 0;
}
