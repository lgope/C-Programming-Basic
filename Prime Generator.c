#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void isPrime(int num)
{
    int sqroot = (int)sqrt((double)num);

    for(int i = 2; i <= sqroot; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void genetarePrimes(int num)
{
    printf("Generates primes untile : %d\n\n", num);

    int i, count = 0;

    for(i = 2; i <= num; i++)
    {
        if(isPrime(i))
        {
            count++;
            printf("%4d : %6d\n", count, i);
        }
    }

    printf("\nTotal prime founded until %d : %d\n", num, count);
}

int main()
{
    int userIn;
    printf("Upto what number do you what to find primes : ");
    scanf("%d", &userIn);

    genetarePrimes(userIn);

    return 0;
}

