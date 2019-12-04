#include<stdio.h>
int main()
{
    int iLoop = 0;
    do
    {
        printf("%d\n", iLoop);
        iLoop = iLoop + 5;
    }
    while(iLoop <= 20);
}
