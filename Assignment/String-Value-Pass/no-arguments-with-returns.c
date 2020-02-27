#include <stdio.h>

#define SIZE 100

char* welcomeMsg()
{
	static char msg[SIZE]="welcome to programming world!";
	return msg;
}

int main()
{
	printf("%s\n", welcomeMsg());
	return 0;
}
