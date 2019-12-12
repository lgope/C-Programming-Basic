#include<stdio.h>
int main()
{
    int arr[10], i, sum = 0;
    printf("Please enter 10 numbers: \n\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum = %d\n", sum);
    printf("\nAverage = %.2f", sum / 10.00);
    getch();
    getch();
    return 0;
}
