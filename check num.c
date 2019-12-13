#include<stdio.h>
int main()
{
    int i, count = 0;
    for(i = 1; i <= 1000; i++)
    {
        if(i%2 == 0 || i%3 == 0)
        {
             count++;
        }
    }
    printf("Total = %d\n", count);
    return 0;
}
