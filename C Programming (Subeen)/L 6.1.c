#include<stdio.h>
int main ()
{
    int ft_marks = 80, st_marks = 74, final_marks = 97;
    double total_marks;
    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
    printf("%.0lf\n", total_marks);
    return 0;
}
