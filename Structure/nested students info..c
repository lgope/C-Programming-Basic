#include<stdio.h>
#include<string.h>

struct address
{
    char campus[20];
    char buil[15];
};

struct student
{
    char name[15];
    int batch;
    struct address b;
};

int main()
{
    struct student a[5], c;
    int i;

    for(i = 0; i < 5; i++)
    {
        fflush(stdin);

        printf("Enter name : ");
        gets(a[i].name);

        printf("Enter batch : ");
        scanf("%d", &a[i].batch);
    }
    fflush(stdin);

    printf("Enter Campus name : ");
    gets(c.b.campus);

    printf("Enter Building name : ");
    gets(c.b.buil);

    for(i = 0; i < 5; i++)
    {
        printf("Student %d : \n", i+1);

        printf("Name     : %s\n", a[i].name);
        printf("Batch    : %d\n", a[i].batch);
        printf("Campus   : %s\n", c.b.campus);
        printf("Building : %s\n", c.b.buil);
    }

    getch();
}
