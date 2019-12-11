#include<stdio.h>
int main()
{
    struct book
    {
        char name[10];
        int id;
        float price;
    };
    struct book a1, a2, a3;
    printf("Program Using Structure.\n");
    scanf("%s %d %f", a1.name, &a1.id, &a1.price);
    scanf("%s %d %f", a2.name, &a2.id, &a2.price);
    scanf("%s %d %f", a3.name, &a3.id, &a3.price);
    printf("%s %d %f\n", a1.name, a1.id, a1.price);
    printf("%s %d %f\n", a2.name, a2.id, a2.price);
    printf("%s %d %f\n", a3.name, a3.id, a3.price);
    return 0;
}
