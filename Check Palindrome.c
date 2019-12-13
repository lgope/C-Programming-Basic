#include<stdio.h>

int main()
{
    char str[20];
    scanf("%d", str);

    int flag = 0, len = strlen(str);
    int i = 0, j = len;

    while(i <= j)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }

        i++;
        j--;
    }

    if(flag == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}
