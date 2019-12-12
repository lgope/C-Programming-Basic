#include<stdio.h>

int main()
{
    FILE *file;

    char p[100];

    file = fopen("read.txt", "r");

    fscanf(file, "%[^\n]", p);

    printf("%s", p);

    fclose(file);

    return 0;
}
