#include<stdio.h>

int main()
{
    int i;
    float gpa[10], sum, cgpa;

    printf("Enter 10 Students GPA :\n");
    for(i = 1; i <= 10; i++)
    {
        scanf("%f", &gpa[i]);
    }


    for(i = 1; i <= 10; i++)
    {
        sum += gpa[i];
    }

    cgpa = sum / 4;

    printf("CGPA = %.2f\n", cgpa);


    return 0;
}
