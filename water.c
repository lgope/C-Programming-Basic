#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a%b;
    if(d!=0)
        printf("%d\n",c+1);
        else
            printf("%d\n",c);
}
