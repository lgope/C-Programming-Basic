#include<stdio.h>
int main()
{
    int grade[5], i, sum = 0;
    float ave;
    for(i = 0; i < 5; i++)
    {
        printf("\n Enter grade[%d] : ", i+1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    ave = (float) sum / 5.0;
    printf("\n\n\n\n Average = %.2f\n", ave);
    return 0;
}
