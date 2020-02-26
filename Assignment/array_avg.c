#include<stdio.h>

float avg_calculate(int num, int arr_size)
{
    return num / arr_size;
}

main()
{
    int arr_size, i,largest;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int arr[arr_size], sum = 0;
    float avg;

    printf("Enter the %d values for array: \n", arr_size);
    for(i=0; i<arr_size; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    avg = avg_calculate(sum, arr_size);

    printf("Average = %.2f\n", avg);

    return 0;
}
