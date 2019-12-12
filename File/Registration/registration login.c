#include<stdio.h>
#include<string.h>

#include<windows.h>
#include<process.h>
#include<conio.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32



struct Login
{
    char fname[100];
    char lname[100];
    char userName[100];
    char password;

};

Registration()
{
    FILE *log;

    log = fopen("Login.txt", "w");
    struct Login l;

    printf("\n\n\t\tEnter first name : ");
    scanf("%s", l.fname);

    printf("\n\t\tEnter last name : ");
    scanf("%s", l.lname);

    printf("\n\t\tEnter username : ");
    scanf("%s", l.userName);

    printf("\n\t\tEnter password : ");
    scanf("%s", &l.password);

    system("CLS");

    LoadingProcess();

    system("CLS");
    system("color 6E");

    printf("\n\t\tRegistration successfully.\n");
    printf("\n\t\tNow Log in\n");

    fwrite(&l, sizeof(l), 1, log);

    fclose(log);

    printf("\n\t\tPress any key to continue.....");

    getch();
    system("CLS");
    system("color 2A");

    login();
}

login()
{
    char NewUserName[100];

    FILE *log;

    log = fopen("Login.txt", "r");

    struct Login l;

    printf("\t\tEnter username : ");
    scanf("%s", NewUserName);

    printf("\t\tEnter password : ");

      char NewPassword[100];
      int star = 0;
      char ch;

      while(1)
      {
          ch = getch();
          if(ch == ENTER)
          {
              NewPassword[star] = '\0';
              break;
          }
          else if(ch == BKSP)
          {
              if(star > 0)
              {
                  star--;
                  printf("\b \b");
              }
          }

          else if(ch == TAB || ch == SPACE)
          {
              continue;
          }

          else
          {
              NewPassword[star] = ch;
              star++;
              printf("*");
          }
      }

      printf("password = %s", NewPassword);
    while(fread(&l, sizeof(l), 1, log))
    {
        if(strcmp(NewUserName, l.userName) == 0 && strcmp(NewPassword, l.password) == 0)
        {
            system("CLS");
            LoadingProcess();
            system("CLS");

            printf("\n\n\n\t\tLogin successfully\n");
        }
        else
        {
            LoadingProcess();
            system("CLS");
            printf("\n\n\n\t\tInvalid username or password.\n");
            printf("\t\tTry again.\n");
        }
    }

    fclose(log);
}

hidepassword()
{
    int i;
    char ch1, pass[100];
    for(i = 0; i < 10; i++)
    {
        ch1 = getch();
        pass[i];

        if(ch1 == 13)
        {
            break;
        }
        else
        {
            printf("*");
        }
    }
    pass[i] = '\0';

    return pass;
}

LoadingProcess()
{
    int x = 5, y = 9;

    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("\t\t\t\tPlease wait....");
    x = 5, y = 10;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);


    printf("\t\t\t\t");
    for(int r = 1; r <= 20; r++)
    {

        for(int q = 0; q <= 10000000; q++);
        printf("%c", 177);
    }
}

StarPassword()
{
    char pass[100];
    int i = 0;
    char ch;
    while(1)
    {
        ch = getch();
        if(ch == ENTER)
        {
            pass[i] = '\0';
            break;
        }
        else if(ch == BKSP)
        {
            if(i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else if(ch == TAB || ch == SPACE)
        {
            continue;
        }

        else
        {
            pass[i] = ch;
            i++;
            printf("*");
        }
    }

}


int main()
{
    int choice;

    Sleep(200);
    printf("\t\t1 : Register\n");
    Sleep(400);
    printf("\t\t2 : Log in\n\n\n");

    Sleep(600);
    printf("\t\tPress : ");



    choice = getche();

    if(choice == '1')
    {
        system("CLS");
        system("color 6E");
        printf("\t\t        _______________\n");
        printf("\t\t\t|  REGISTER   |\n");
        printf("\t\t        ~~~~~~~~~~~~~~~");


        Registration();
    }

    else if(choice == '2')
    {
        system("CLS");
        system("color 5D");

        login();
    }

    getch();
    return 0;
}
