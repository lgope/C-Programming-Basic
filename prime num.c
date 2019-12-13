#include<stdio.h>
int main()
{
    int i, num = 1, count = 0, n;
    scanf("%d", &n);
    while(num <= n)
    {
        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf(" %d", num);
        }
        count = 0;
        num++;
    }
    return 0;
}
