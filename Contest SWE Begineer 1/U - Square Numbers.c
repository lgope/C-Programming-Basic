#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, i, x, count = 0;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a <= 0 || b <= 0)
        {
            break;
        }
        for(i = a, x = 0; i <= b; i++)
        {
            x = sqrt(i);
            if(x*x == i)
            {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}
