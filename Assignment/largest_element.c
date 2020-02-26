#include<stdio.h>

main()
{
    int arr_size, i,largest;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int arr[arr_size];

    printf("Enter the %d values for array: \n", arr_size);
    for(i=0; i<arr_size; i++)
    {
        scanf("%d",&arr[i]);
    }

    largest=arr[0];
    for(i = 1; i < arr_size; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("\n%d is the largest element.\n",largest);
}
