#include<stdio.h>
int main()
{
   int n,i,f,sum=0,j;
   printf("Enter a value: ");
   scanf("%d",&n);
   for(j=1;j<=n;j++)
   {
        f=1;
        for(i=1;i<=j;i++)
   {
       f=f*i;

   }
  printf("%d!",j);
  if(j<n)
  {
      printf("+");
  }
      sum=sum+f;
   }
   printf("= %d",sum);
    return 0;
}
