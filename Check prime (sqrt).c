#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, flag = 0;
    scanf("%d", &n);

    for(i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("It's a prime number.\n");
    }
    else
    {
        printf("It's a not prime number.\n");
    }

    return 0;
}
