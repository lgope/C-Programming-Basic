#include<stdio.h>
int main()
{

    int n = 5, i = 1;
    for(; i <= 10; i = i+1) {
        printf("%d x %d = %d\n", n , i, n*i);
    }
    return 0;
}
