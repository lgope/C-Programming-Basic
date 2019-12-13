#include<stdio.h>

int flag(int x)
{
    int width = 6;

    int area = x * width;

    return area;
}
int main()
{
    int lenght = 10, res;

    res = flag(lenght);

    printf("%d\n", res);

}
