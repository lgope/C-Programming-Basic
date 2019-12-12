#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("The num is even\n");
    }
    else {
        printf("The num is odd\n");
    }
    return 0;
}
