#include<stdio.h>
int main()
{
    double height[40];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%lf", &height[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d) Height %.2lf\n", i+1, height[i]);
    }

    printf("\n");
    double low = height[0];
    int l = 0;
    for(i = 1; i < 10; i++)
    {
       if(low > height[i])
       {
           low = height[i];
            l = i;
       }
    }
    printf("\nLowest height = %.2lf\n", low);
    printf("Location = %d\n", l+1);

    return 0;
}

