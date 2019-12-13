#include<stdio.h>
int main()
{
  int i,j,n,sum=0;
  printf("Enter The Number Of j:");
  scanf("%d",&j);
  printf("Enter The Number Of n:");
  scanf("%d",&n);
  for(i=j;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("%d\n",i);
    sum=sum+i;
    }
  }
  printf("The total sum of the all Even Number is %d\n",sum);
}

