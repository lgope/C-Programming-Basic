#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int row, col, spc, i = 1;

    for (row = 0; row < 5; row++)
    {
        for (spc = 1; spc < 5-row; spc++)
            printf(" ");

        for (col = 0; col <= row; col++)
        {
            if (row == 0 || col == 0)
                i = 1;
            else
                i = i * (row - col + 1) / col;

            printf(" %d", i);
        }

        printf("\n");
    }


    return 0;
}
