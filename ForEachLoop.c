#include<stdio.h>

int main()
{
    int x, a[] = {10, 20, 30, 40, 50};

    for(x : a)
    {
        printf("%d ", x);
    }
}
