#include<stdio.h>
int main()
{
    int row, col, x = 1;
    for(row = 1; row <= 3; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", x);
            x = x + 4;
        }
        printf("\n");
        //x = x + 2;
    }
}
