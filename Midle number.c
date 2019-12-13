#include<stdio.h>
int main()
{
    int T, I, A, B, C;
    scanf("%d", &T);
    for(I = 1; I <= T; I++)
    {
        scanf("%d %d %d", &A, &B, &C);
        if(A < B && A < C && B < C)
        {
            printf("Case %d: %d\n", I, B);
        }
        else if(B < A && B < C && A < C)
        {
            printf("Case %d: %d\n", I, A);
        }
        else if(B < A && B < C && A > C)
        {
            printf("Case %d: %d\n", I, C);//A > B && A > C && B < C
        }
        else
        {
            printf("Case %d: %d\n", I, B);
        }
    }
    return 0;
}
