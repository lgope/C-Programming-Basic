#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct student
{
    int rollno;
    char name[30];
    float mark;
};

int main()
{
    struct student stu, stud;
    char n;

again:
    printf("Enter your chose.\n\n");
    //Sleep(100);
    printf("1. Insert\n");
//Sleep(300);
    printf("2. Display\n");
    //Sleep(500);
    printf("3. Search\n");
    printf("4. Update\n5. Delete\n\n");
    printf("Press : ");
    //scanf("%d", &n);
    n = getche();
    system("CLS");

    switch(n)
    {
    case '1':
        insert();
        break;

    case '2':
        disp();
        break;

    case '3':
        search();
        break;

    case '4':
        update();
        break;

    case '5':
        del();
        break;

    default :
        printf("Enter valid choose : \n");

        goto again;
    }

    return 0;
}

void update()
{
    char another;
    struct student stu, stud;
    char nm[30];

    FILE *fp;
    fp = fopen("sturecord.txt", "r+");

    another = 'y';
    while(another == 'y')
    {
        printf("Enter the student name to modify : ");
        scanf("%s", nm);

        rewind(fp);
        while(fread(&stud, sizeof(stud), 1, fp) == 1)
        {
            if(strcmp(stud.name, nm) == 0)
            {
                printf("Name : %s\nRoll no : %d\nMark : %.2f\n", stud.name, stud.rollno,  stud.mark);
choose:
                printf("\nWhat you want to update : \n");
                printf("1. Name\n2. Roll\n3. Mark\n4. All\n\nPress : ");

                if(getch() == 49)
                {
                    system("CLS");
                    printf("Enter new name : ");
                    scanf("%s", stud.name);
                }
                else if(getch() == 50)
                {
                    system("CLS");
                    printf("Enter new roll no : ");
                    scanf("%d", &stud.rollno);
                }
                else if(getch() == 51)
                {
                    system("CLS");
                    printf("Enter new roll no : ");
                    scanf("%d", &stud.mark);
                }
                else if(getch() == 52)
                {
                    system("CLS");
                    printf("Enter new name, roll and mark : \n");
                    scanf("%s%d%f", stud.name, &stud.rollno, &stud.mark);
                }
                else
                {
                    /*printf("Worng entry!!\n");
                    printf("Try again....");*/
                    system("CLS");
                    goto choose;
                }

                fseek(fp, -sizeof(stud), SEEK_CUR);
                fwrite(&stud, sizeof(stud), 1, fp);
                break;
            }
        }
        printf("\nModify another record (y/n)");
        fflush(stdin);
        another = getch();
    }

    fclose(fp);
}

void insert()
{
    struct student stu, stud;
    FILE *fp;
    fp = fopen("sturecord.txt", "a");

again:
    printf("Enter the roll no : ");
    scanf("%d", &stud.rollno);

    printf("Enter name : ");
    scanf("%s", stud.name);

    printf("Enter marks : ");
    scanf("%f", &stud.mark);

    //fprintf(fp, "Roll no : %d\nName : %s\nMark : %.2f\n", stud.rollno, stud.name, stud.mark);
    fwrite(&stud, sizeof(stud), 1, fp);

    printf("Insert again : y/n");
    if(getch() == 121 || getch() == 89)
    {
        system("CLS");
        goto again;
    }

    fclose(fp);
}

void disp()
{
    struct student stu, stud;
    FILE *fp;
    fp = fopen("sturecord.txt", "r");
    printf("\nRoll\tName\tMark\n\n");
    while(fread(&stud, sizeof(stud), 1, fp))
    {
        printf("%d\t%s\t%.2f\n", stud.rollno, stud.name, stud.mark);
    }

    fclose(fp);
}

void search()
{

    struct student stu, stud;
    FILE *fp;

    fp = fopen("sturecord.txt", "r");

    char ch[100], press;
    int match = 0;

find:
    printf("Search by name : ");
    scanf("%s", ch);

    while(fread(&stud, sizeof(stud), 1, fp))
    {
        if(strcmp(ch, stud.name) == 0)
        {

            printf("Name : %s\nRoll no : %d\nMark : %.2f\n", stud.name, stud.rollno,  stud.mark);
            match++;
        }
    }

    if(match == 0)
    {
        printf("\nNot match! Try again\n");
        printf("Press y/n");
        press = getche();

        switch(press)
        {
        case 'y':
            system("CLS");
            goto find;
            break;
        case 'n':
            break;
        }
    }

    fclose(fp);
}


void del()
{
    struct student stu, stud;
    FILE *fp, *fp1;

    int id, found = 0, count = 0;

    fp = fopen("sturecord.txt", "r");
    fp1 = fopen("temp.txt", "w");

    printf("Enter the roll you want to Delete : ");
    scanf("%d", &id);

    while(1)
    {
        fread(&stu, sizeof(stu), 1, fp);
        if(feof(fp))
        {
            break;
        }
        if(stu.rollno == id)
        {
            found = 1;
        }
        else
        {
            fwrite(&stu, sizeof(stu), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found == 0)
    {
        printf("No record found\n");
    }
    else
    {
        printf("Delete successfully\n\n");

        fp = fopen("sturecord.txt", "w");
        fp1 = fopen("temp.txt", "r");

        while(1)
        {
            fread(&stu, sizeof(stu), 1, fp1);
            if(feof(fp1))
            {
                break;
            }
            fwrite(&stu, sizeof(stu), 1, fp);
        }
    }

    fclose(fp);
    fclose(fp1);
}
