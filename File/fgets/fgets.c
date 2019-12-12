#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char ch[100];
    int i;

    file = fopen("test.txt", "r");

    if(file == NULL)
    {
        printf("File doesn't exist.\n");
    }
    else
    {
        printf("File is opened.\n");
        while(!feof(file))
        {
            fgets(ch, 100, file);
            /*printf("%s", ch);
            int len = strlen(ch);
            for(i = 0; i < ch[i] != '\0';  i++)
            {
                printf("%c", ch[i]);
            }
            printf("\n");*/
            printf("%s", ch);
        }
        fclose(file);
    }

    getch();
}
