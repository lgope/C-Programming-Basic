#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
//defining the properties of the fields used in the program
#define NAME 50
#define ADDRESS 50
#define PHONE 20
#define EMAIL 20
#define SIZE 500
void Insert();
void Del_info();
void Display();
void Search();
void Exit();
char info[SIZE];
struct addressbook
{
  char name [NAME] ;
  char address [ADDRESS];
  char phone [PHONE];
  char email [EMAIL] ;
  char Target[NAME];
};
//initializing the files used in the program
FILE *AddressBook;
FILE *rectemp;
int main()
{
  int choice=0;
  printf("Welcome \n");
    printf("\n 1> Insert new Entry\n");
    printf("\n 2> Delete Entry\n");
    printf("\n 3> Display all Entry\n");
    printf("\n 4> Search Entry\n");
    printf("\n 5> Exit the program\n");
    printf("\n Enter your choice <1-5>: ");
    scanf("%i",&choice);
    switch (choice)
    {
    case 1:
      Insert();
    break;
    case 2:
      Del_info();
    break;
    case 3:
      Display();
    break;
    case 4:
      Search();
    break;
    case 5:
      exit(0);
    break;
	case 6: break;
    default: printf("**Invalid Input.**\n");
 }
 return (0);
 }

void Insert()
{
  char choice1;
  do
  {		//opening the AddressBook file
    AddressBook = fopen("AddressBook.txt","a+");
    printf("Enter Person's Name\n");
    scanf("%s",addressbook.name);
    printf("Enter Person's Address\n");
    scanf("%s",addressbook.address);
    printf("Enter Person's Phone no.\n");
    scanf("%s",addressbook.phone);
    printf("Enter Person's E-mail\n");
    scanf("%s",addressbook.email);
    fprintf(AddressBook,"%s %s %s %s  \n",addressbook.name,addressbook.address,addressbook.phone,addressbook.email);
    fclose(AddressBook);
    printf("Press y/Y to Execute the Program Again \n");
    scanf("%c",&choice1);
  }
  while(choice1=='y'||choice1=='Y');
  main();
}
void Del_info()
{
  char choice2;
  char Target[SIZE];
  int Found=0;
  rectemp=fopen("rectemp.txt","w");
  if((AddressBook=fopen("AddressBook.txt","r"))==NULL)
    printf("**The File is Empty**\n\n");
  else{
    printf("\tEnter Person's Name : ");
    gets(Target);
    while(!feof(AddressBook))
    {
      fscanf(AddressBook,"%s %s %s %s",addressbook.name,addressbook.address,addressbook.phone,addressbook.email);
      if(feof(AddressBook))
        break;
      if(strcmp(Target,addressbook.name)!=0)
        fprintf(rectemp,"%s %s %s %s \n",addressbook.name,addressbook.address,addressbook.phone,addressbook.email);
      else {
        Found=1;
      }
      if (!Found)
      {
        printf("\t**There is no such Entry\n");
      }
      printf("\t**Item is Deleted**\n");
      fclose(AddressBook);
      fclose(rectemp);
      remove("Addressbook.txt");
      rename("rectemp.txt","AddressBook.txt");
      do{
        printf("Press y/Y to Execute the Program Again \n");
        scanf("%c",&choice2);
      }
      while(choice2=='y'||choice2=='Y');
    }
  }
}
void Display()
{
  char choice3;
  AddressBook = fopen("AddressBook.txt","a+");
  do
  {
    fgets(info,SIZE,AddressBook);
    printf("%s\n",info);
  }while(!feof(AddressBook));
  fclose(AddressBook);
  do{
    printf("Press y/Y to Execute the Program Again \n");
    scanf("%c",&choice3);
  }while(choice3=='y'||choice3=='Y');
  main();
}
void Search()
{
  char choice4;
  char Target[SIZE];
  int Found=0;
  if((AddressBook=fopen("AddressBook.txt","r"))==NULL)
    printf("**The file is empty** !!\n\n");
  else
  {
    printf("\tEnter The Name:");
    scanf("%s",Target);
    while(!feof(AddressBook)&& Found==0)
    {
      fscanf(AddressBook,"%s %s %s %s ",addressbook.name,addressbook.address,addressbook.phone,addressbook.email);
      if(strcmp(Target,addressbook.name)==0)
        Found=1;
    }
    if(Found)
    {
      printf("The Name is:               %s\n",addressbook.name);
      printf("The Address is:            %s\n",addressbook.address);
      printf("The phone number is:       %s\n",addressbook.phone);
      printf("The e-mail is:             %s\n",addressbook.email);
    }
    else if(!Found)
      printf("**There is no such Entry**\n");
    fclose(AddressBook);
  }
  do{
    printf("Press y/Y to Execute the Program Again \n");
    scanf("%c",&choice4);
  }
  while(choice4=='y'||choice4=='Y');
}
void Exit()
{
  exit(0);
}
