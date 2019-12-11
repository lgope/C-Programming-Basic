#include<stdio.h>
int main()
{
   int n,sum=0;;
   printf("Enter value for N: ");
   scanf("%d",&n);
   int i=1;
   while(i<=n)
   {
       printf("%d",i);
       if(i<n)
        printf("+");
       sum=sum+i;
       i=i+2;
   }
   printf(" = %d",sum);
    return 0;
}
