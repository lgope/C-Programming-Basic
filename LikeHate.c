#include<stdio.h>

int main()
{
    int n, t, s, like[100], hate[100], li = 0, ha = 0, i, l = 0, h = 0, userInput, res = 0, flag = 0;
    
    printf ("Enter a number : ");
    scanf("%d", &n);
    int temp = n;

    while(temp--)
    {
        scanf("%d", &t);
        if(t == 1)
        {
            scanf("%d", &s);
            l = l + s;
            for(i = 0; i < s; i++)
            {
                scanf("%d", &like[i]);
            }
        }
        else
        {
            scanf("%d", &s);
            h = h + s;
            for(i = 0; i < s; i++)
            {
                scanf("%d", &hate[i]);
            }
        }
    }

    scanf("%d", &userInput);

    printf("\n\nLike : \n");
    for(i = 0; i < sizeof(like); i++)
    {
        if(userInput == like[i])
        {
            li = 1;
        }
        printf("%d ", like[i]);
    }

    printf("\n\nHate :\n");
    for(i = 0; i < sizeof(hate); i++)
    {
        if(userInput != hate[i])
        {
            flag++;
        }

        printf("%d ", hate[i]);
    }

    if(flag != 0)
    {
        li++;
    }

    printf("\n\n%d people like and %d people hate this number.\n", li, ha);


    return 0;
}
