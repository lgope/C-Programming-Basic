#include<stdio.h>
int main()
{
    int num1, num2, i, x;

    printf("Enter two positive number: ");
    scanf("%d %d", &num1, &num2);
    for(i = num1+1; i < num2; i++)
    {
        for(x = 2; x < i; x++)
            if(i%x == 0)
                break;
        if(x == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

