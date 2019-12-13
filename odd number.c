#include<stdio.h>
int main()
{
    int n, j;
    scanf("%d", &j);
    for(n = 1; n <= j; n = n + 2){
        printf("%d\n", n);
    }
}
