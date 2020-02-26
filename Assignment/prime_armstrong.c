#include <stdio.h>
#include <math.h>

int isPrimeNumber(int num)
{
    int i, flag = 1;
    for (i = 2; i <= num / 2; ++i)
    {
        // condition for non-prime number
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int isArmstrongNumber(int num)
{
    int original, rem, result = 0, n = 0, flag;
    original = num;

    while (original != 0)
    {
        original /= 10;
        ++n;
    }

    original = num;

    while (original != 0)
    {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }

    // condition for Armstrong number
    if (result == num)
        flag = 1;
    else
        flag = 0;

    return flag;
}

int main()
{
    int num, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // is prime number
    flag = isPrimeNumber(num);

    if (flag)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // is Armstrong number
    flag = isArmstrongNumber(num);

    if (flag == 1)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}




