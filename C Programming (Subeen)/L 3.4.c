#include<stdio.h>
int main()
{
    int num, remainder;
    scanf("%d", &num);
    remainder = num %2;
    if(remainder == 0) {
        printf("The num is even\n");
    }
    else {
        printf("The num is odd\n");
    }
    return 0;
}
