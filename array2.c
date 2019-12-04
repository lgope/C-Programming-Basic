#include<stdio.h>
#include<dos.h>
#include<conio.h>

int initmouse();
void showmouseptr();

union REGS i, o;

main()
{
   int status;

   status = initmouse();

   if (status == 0)
      printf("Mouse support not available.\n");
   else
      showmouseptr();

   getch();
   return 0;
}

int initmouse()
{
 int  i.x.ax = 0;
  int 86int86(0X33, &i, &o);
   return (o.x.ax);
}

void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33, &i, &o);
}
