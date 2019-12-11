#include<stdio.h>
struct book
{
    char name[100];
    int id;
    float price;
};
int main()
{
    struct book a[30];
    int i;
    for(i = 0; i < 3; i++)
    {
        scanf("%s %d %f", a[i].name, &a[i].id, &a[i].price);
    }
    for(i = 0; i < 3; i++)
    {
        printf("Name : %s\nId = %d\nPrice = %.2f\n", a[i].name, a[i].id, a[i].price);
    }
    getch();
    return 0;
}
