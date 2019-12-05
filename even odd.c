#include<stdio.h>
int main()
{
    int a, b, even = 0, odd = 0;
    for(a = 1; a <= 1000; a++)
    {
        if(a%2 == 0)
        {
            even++;
        }
        if(a%3 == 0)
        {
            odd++;
        }
    }
    printf("even = %d\nodd = %d\n", even, odd);
}
