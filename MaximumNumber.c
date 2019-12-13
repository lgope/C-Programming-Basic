#include<stdio.h>
int main()
{
    int T, A, B, C, i;
    printf("Enter a number: ");
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &A, &B, &C);
        if(A > B && A > C)
        {
            printf("Case %d: %d", i, A);
        }
        else if(B > A && B > C)
        {
            printf("Case %d: %d", i, B);
        }
        else
        {
            printf("Case %d: %d", i, C);
        }
    }
    return 0;
}
