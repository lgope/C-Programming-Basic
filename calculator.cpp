#include<stdio.h>
int main()
{
   int m,n,op,result;
   printf("Enter value 1: ");
   scanf("%d",&m);
   printf("Enter value 2: ");
   scanf("%d",&n);
   printf("1:Add\n2:Sub\n3:Multi\n4:Div\n5:Mod\n");
   printf("Select any option from the above: ");
   scanf("%d",&op);
   switch(op)
   {
   case 1:
    result=m+n;
    printf("Result = %d",result);
    break;
   case 2:
    result=m-n;
    printf("Result = %d",result);
    break;
   case 3:
    result=m*n;
    printf("Result = %d",result);
    break;
   case 4:
    result=m/n;
    printf("Result = %d",result);
    break;
   case 5:
    result=m%n;
    printf("Result = %d",result);
    break;
   default:
    printf("Your selection is not right");
   }

    return 0;
}
