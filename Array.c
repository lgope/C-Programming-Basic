#include<stdio.h>
int main()
{
    int a[1000],sum = 0,i,n;
    printf("Please enter how many number you want to declare: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum/n);
    return 0;
}
