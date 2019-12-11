#include<stdio.h>
#include<string.h>

struct student
{
    char name[15];
    int age;
    float cgpa;
};

int main()
{
    struct student a[7];
    int i;

    for(i = 0; i < 7; i++)
    {
        fflush(stdin);
        printf("Enter name : ");
        gets(a[i].name);

        printf("Enter age : ");
        scanf("%d", &a[i].age);

        printf("Enter CGPA : ");
        scanf("%f", &a[i].cgpa);
    }

    for(i = 0; i < 7; i++)
    {
        printf("Person %d: \n", i+1);

        printf("Name : %s\n", a[i].name);
        printf("Age  : %d\n", a[i].age);
        printf("CGPA : %.2f\n", a[i].cgpa);
    }

    return 0;
}
