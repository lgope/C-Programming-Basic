#include<stdio.h>
int main()
{
    int a, b, c, temp = 0;
    printf("Input 2 interger number to know their GCD and LCM: \n\n");
    scanf("%d %d", &a, &b);
    printf("\n");
    c = a*b;
    while(1)
    {
        temp = b % a;
        if(temp == 0)
        {
            printf("GCD = %d\n", a);
            break;
        }
        else
        {
            b = a;
            a = temp;
        }
    }
    temp = c / a;
    printf("LCM = %d\n", temp);

    getch();
    return 0;
}
