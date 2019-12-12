 #include<stdio.h>
int main()
{
    int row, col;
    int x = 1;
    for(row = 1; row <= 3; row++)
    {

        for(col = 1; col <= x; col++)
        {
            printf("*");
        }
        printf("\n");
        x = x + 2;
    }
}
