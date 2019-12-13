#include<stdio.h>
int main()
{
    system("color 3f");
    int a;
    printf("Input integer value: ");
    scanf("%d", &a);
    if(a == a){
        a =- a;
        printf("%d", a);
        }else if(a ==- a) {
            a = a;
            printf("\a%d", a);
    }
    return 0;
}
