#include<stdio.h>
#include<string.h>

struct address
{
    int batch;
    char campus[20];
};

struct student
{
    char name[15];
    char id[20];
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

        printf("Enter ID : ");
        scanf("%d", &a[i].id);
    }
    fflush(stdin);

    printf("Enter batch : ");
    gets(c.b.batch);

    printf("Enter campus : ");
    gets(c.b.campus);

    printf("\n\n");
    for(i = 0; i < 5; i++)
    {
        printf(" Student %d : \n", i+1);

        printf("  Name     : %s\n", a[i].name);
        printf("  ID       : %d\n", a[i].id);
        printf("  batch    : %s\n", c.b.batch);
        printf("  campus   : %s\n", c.b.campus);
        printf("\n");
    }

    return 0;
}

