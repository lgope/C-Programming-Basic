#include<stdio.h>
int main()
{
    printf("Lakshman Gope\nDept. of SWE\nDaffodil International University\n");
    int a,b;
    printf("Input an integer value: ");
    scanf("%d",&a);
    b=a%4;
    //printf("\nb= %d",b);
    if(b==0)
    {
        printf("\n%d Leapyear",a);
    }
    else
    {
        printf("\n%d Not Leapyear",a);
    }
    return 0;
}
