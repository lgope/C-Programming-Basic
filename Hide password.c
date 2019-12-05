#include<stdio.h>

int main()
{
    char pass, ch[10];

    printf("Enter your password : ");
   /* for(int i = 0; i < 10; i++)
    {
        ch[i] = getch();

        if(ch[i] == 13)
        {
            break;
        }
        else
        {
            printf("*");
        }

    }*/

    pass = ab();

    printf("your pass is : %s", pass);
}

int ab()
{
    char ch1, password[100];

     for(int i = 0; i < 10; i++)
    {
        ch1 = getch();

        password[i] = ch1;

        if(ch1 != 13)
        {
            break;
        }
        else
        {
            printf("*");
        }

    }

}
