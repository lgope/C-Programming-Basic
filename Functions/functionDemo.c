#include<stdio.h>
 int A()
 {
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);

     if(n > 0)
     {
         if(n % 2 == 0)
         {
             printf("Even\n");
         }
         else
         {
             printf("Odd\n");
         }
     }
 }

 int B()
 {
     int n, i, f = 1;
     printf("Enter a number: ");
     scanf("%d", &n);
     if(n > 0)
     {
         for(i = 1; i <= n; i++)
         {
             f = f * i;
         }
         printf("%d! = %d\n", n, f);
     }
 }

 int main()

 {
     A();
     B();
     return 0;
 }
