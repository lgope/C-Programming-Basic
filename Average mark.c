#include<stdio.h>
int main ()
{
    system("color 0f2");
    int sub1, sub2, sub3, sub4,sub5,aggmarks;
    float percentmarks;
    printf("enter the marks of the student in subject 1: ");
    scanf("%d",&sub1);
    printf("\nenter the marks of the student in subject 2: ");
    scanf("%d",&sub2);
    printf("\nenter the marks of the student in subject 3: ");
    scanf("%d",&sub3);
    printf("\nenter the marks of the student in subject 4: ");
    scanf("%d",&sub4);
    printf("\nenter the marks of the student in subject 5: ");
    scanf("%d",&sub5);
    aggmarks = ( sub1 + sub2 + sub3 + sub4 + sub5);
    percentmarks = (aggmarks / 500.0) * 100.0;
    printf("Aggmarks = %d\n", aggmarks);
    printf("Percentmarks = %.2f\n", percentmarks);
    return 0;
}
