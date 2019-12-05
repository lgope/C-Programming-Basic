#include<stdio.h>
int main()
{
    int arr[10], i, even = 0, odd = 0;
    float ave = 0;
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<= 9; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nEven = %d\nOdd = %d\n", even, odd);

    return 0;
}
