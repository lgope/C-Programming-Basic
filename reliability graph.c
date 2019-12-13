#include<stdio.h>
#include<math.h>
#define lambda 0.001
int main()
{
    system("color 0f2");
    int i, R;
    float r;
    double t;
    for(i = 1; i <= 27; ++i)
    {
        printf("__");
    }
    printf("\n");
    for(t = 0; t <= 3000; t += 150)
    {
        r = exp(-lambda*t);
        R = (int)(50*r+0.5);
        printf("|");
        for(i = 1; i <= R; ++i)
        {
            printf("*");
        }
        printf("#\n");
    }
    for(i = 1; i < 3; ++i)
    {
        printf("|\n");
    }
    return 0;
}
