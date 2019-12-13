#include<stdio.h>
int main()
{
    int marks[4][10];
    int i, j, col;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 10; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for(col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] / 4.00 + marks[1][col] / 4.00 + marks[2][col] / 2.00;
        printf("Roll No: %d Total Marks: %d\n", col+1, marks[3][col]);
    }
    return 0;
}
//input sample "80 70 80 80 98 80 85 90 80 50 60 80 80 80 90 90 80 90 70 80 90 80 90 78 80 90 60 70 80 80
//0 0 0 0 0 0 0 0 0 0"
