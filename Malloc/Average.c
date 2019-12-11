#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr;
    float avg;
    int n, i;
    int sum = 0;

    printf("How many scores : ");
    scanf("%d", &n);

    ptr  = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Enter score[%d]: ", i+1);
        scanf("%d", &ptr+i);
    }

    for(i = 0; i < n; i++)
    {
        sum += *(ptr+i);
    }

    avg = (float)sum / n;

    printf("Average score : %.2f\n", avg);

    //getch();
    free(ptr);

    return 0;
}
