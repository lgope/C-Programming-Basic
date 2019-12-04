#include<stdio.h>
int main()
{
    int i;
    //for(i=1;i<=100;i=i+2)
    i=5;
    int a=0;;
    while(a<=30)
    {
      printf("result= %d",a);
      printf("\n");
      a=a+i;
      i++; //result=i+a;
    }
    return 0;
}
