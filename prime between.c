#include<stdio.h>
int main()
{
    int a, b, i, x;
    scanf("%d %d", &a, &b);
    for(i = a+1; i < b; i++)
    {
        for(x = 2; x < i; x++)
            if(i%x == 0)
                break;
        if(x == i)
            printf("%d ", i);
    }
}
