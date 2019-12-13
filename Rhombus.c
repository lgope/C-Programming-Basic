/*
output:
         * * * * * * * * * *
        * * * * * * * * * *
       * * * * * * * * * *
      * * * * * * * * * *
     * * * * * * * * * *
    * * * * * * * * * *
   * * * * * * * * * *
  * * * * * * * * * *


*/

#include<stdio.h>
int main()
{
    int row, col, spc ;
    for(row = 1; row <= 8; row++)
    {
        for(spc = 8; spc >= row; spc--)
        {
            printf(" ");
        }
        for(col = 0; col < 10; col++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
