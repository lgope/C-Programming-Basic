#include<stdio.h>
int main()
{
   int n,sum=0,k;
   printf("Enter value for N: ");
   scanf("%d",&n);
   int j=5;
   int i=1;
   while(i<=n)
   {
       printf("%d/%d",j,i);
       if(i<n)
        printf("+");
        k=j/i;
       sum=sum+k;
       j=j+5;
       i=i+1;
   }
   printf(" = %d",sum);
    return 0;
}
