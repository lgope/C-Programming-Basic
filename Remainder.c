#include<stdio.h>

int main()
{
    char num[101];
    int len;
    int sum;

    scanf("%s", num);
    sum = 0;

    for(len = 0; num[len]; len++)
        sum = sum + num[len] - 48;

    printf("9 --> %d\n", sum % 9);

    return 0;
}
