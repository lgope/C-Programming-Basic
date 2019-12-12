#include<stdio.h>
int main()
{

    int n, i,m,j;
    scanf("%d",&j);
    for(n = 1; n <= j; n++) {
            m=0;
        for(i = 1; i <= 10; i++) {
                m=m+n;
            printf("%d x %d = %d\n", n , i,m);
        }
    }
    return 0;
}
