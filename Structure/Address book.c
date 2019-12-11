#include<stdio.h>
#include<string.h>

struct book
{
    char name[20];
    char id[20];
    char pnum[20];
    char bgroup[10];
    int age;
};


int main()
{
    FILE *file;

    file = fopen("addressbook.txt", "w");
    int i, n;

    printf("Enter how many person's profile information you wanna save : ");
    scanf("%d", &n);

    struct book arr[n];
    /*arr = (int *)malloc(sizeof(int) * n);*/

    for(i = 0; i < n; i++)
    {
        printf("Enter profile information for person %d :\n", i+1);

        printf("Name      : ");
        //scanf("%s", arr[i].name);  /*scanf("%[^\n]",  arr[i].name); /gets(arr[i].name);*/
        fflush(stdin);
        gets(arr[i].name);

        printf("Id        : ");
        //scanf("%s", arr[i].id);
        gets(arr[i].id);

        printf("Phone Num : ");
        // scanf("%s", &arr[i].pnum);
        gets(arr[i].pnum);

        printf("B. Group  : ");
        // scanf("%s", arr[i].bgroup);
        gets(arr[i].bgroup);

        printf("Age       : ");
        scanf("%d", &arr[i].age);

    }

    for(i = 0; i < n; i++)
    {
        printf("%d. Profile Information of %s : \n", i+1, arr[i].name);
        printf("Name      : %s\n", arr[i].name);
        printf("Id        : %s\n", arr[i].id);
        printf("Phone Num : %s\n", arr[i].pnum);
        printf("B. Group  : %s\n", arr[i].bgroup);
        printf("Age       : %d\n", arr[i].age);
    }



    if(file == NULL)
    {
        printf("File doesn't exist.\n");
    }
    else
    {
        printf("File is opened.\n");

            for(i = 0; i < n; i++)
            {
                fprintf(file,"%d. Profile Information of %s : \n\n", i+1, arr[i].name);
                fprintf(file,"Name      : %s\n", arr[i].name);
                fprintf(file,"Id        : %s\n", arr[i].id);
                fprintf(file,"Phone num : %s\n", arr[i].pnum);
                fprintf(file,"B. Group  : %s\n", arr[i].bgroup);
                fprintf(file,"Age       : %d\n", arr[i].age);
                fprintf(file, "\n\n");

            }


        printf("Written Successfully.\n");

        fclose(file);
    }

    free(arr);

    getch();

}
