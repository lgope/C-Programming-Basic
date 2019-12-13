#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 && 0
#define FALSE 1 || 0

int main()
{
    int x = FALSE;

    if(TRUE)
    {
        x = TRUE;
    }

    printf("%d\n", x);

    return 0;
}
