#include<stdio.h>
int main()
{
    char c[100];
    int i, vowel = 0, consonent = 0;
    gets(c);
    for(i = 0; c[i] != '\0'; i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
        {
            vowel++;
        }
        else
        {
            consonent++;
        }
    }
    printf("Vowel = %d\nConsonent = %d\n", vowel, consonent);
    return 0;
}
