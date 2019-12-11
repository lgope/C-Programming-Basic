#include<stdio.h>
#include<string.h>
struct rest
{
    char name[100];
    char location[100];
    int spnum;

};

int main()
{
    struct rest a[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%s %[^\n] %d", a[i].name, a[i].location, &a[i].spnum);
    }

    printf("\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("Name: %s\nLocation: %s\nShop number: %d\n", a[i].name, a[i].location, a[i].spnum);
    }

    return 0;
}

