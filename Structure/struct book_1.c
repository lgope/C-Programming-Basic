#include<stdio.h>
int main()
{
    struct book
    {
        char name[10];
        int id;
        float price;
    };
    struct book a[20];
    int i;
    printf("Program Using Structure.\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%s %d %f", a[i].name, &a[i].id, &a[i].price);
    }
    printf("Output:\n");
    for(i = 0; i < 3; i++)
    {
        printf("%s %d %.2f\n", a[i].name, a[i].id, a[i].price);
    }

    return 0;
}

