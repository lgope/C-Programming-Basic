#include<stdio.h>
int main()
{
    int marks, i, count;
    int total_marks[40];
    for(i = 0; i < 40; i++)
    {
        scanf("%d", &total_marks[i]);
    }
    for(marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for(i = 0; i < 40; i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }

    return 0;
}
