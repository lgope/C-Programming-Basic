#include<stdio.h>
#include<math.h>

int main()
{
    int num, x;

    scanf("%d", &num);
    x = sqrt(num);

    if(x*x == num)
    {
        printf("Square.\n");
    }
    else
    {
        printf("Not square.\n");
    }

    getch();
    return 0;
}
