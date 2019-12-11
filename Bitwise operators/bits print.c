#include<stdio.h>


void printfBinary(int n)
{
    int i;
    unsigned k = 1 << 31;

    for(i = 0; i < sizeof(int) * 8; i++)
    {
        if((n & (k >> i)) == (k >> i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if((i+1) % 8 == 0)
        {
            printf(" ");
        }
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printfBinary(x);

    getch();
    return 0;
}
