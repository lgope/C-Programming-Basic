#include<stdio.h>
int main()
{
    int arr[10], i, sum = 0, big, small, Lb = 0, Ls = 0;
    float ave = 0;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The sequence of array.\n");
    for(i = 0; i <= 9; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    for(i = 0; i <= 9; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n\nSum = %d\n", sum);
    ave = sum / 10.00;
    printf("Average = %.2f\n", ave);

    big = arr[0],small = arr[0];
    for(i = 0; i <= 9; i++)
    {
        if(big < arr[i])
        {
            big = arr[i];
            Lb = i;
        }


        if(small > arr[i])
        {
            small = arr[i];
            Ls = i;
        }
    }

    printf("\nBig = %d\nSmall = %d\n\n", big, small);
    printf("Location of big = a[%d]\n", Lb);
    printf("Location of small = a[%d]\n", Ls);

    return 0;
}
