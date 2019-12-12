#include<stdio.h>
int main()
{
    FILE *file;
    char name[] = " (Proddut)";
    int len, i;
    len = strlen(name);
    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");
    }
    else
    {
        printf("File is opened.\n");
        for(i = 0; i < len; i++)
        {
            fputc(name[i], file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }

    getch();
}
