#include<stdio.h>
int find_mini(int a[], int n);
int main()
{
    int a[] = {10, 500, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 11;
    int mini = find_mini(a, n);
    printf("%d\n", mini);

    return 0;
}
int find_mini(int a[], int n)
{
    int mini = a[0];
    int i;
    for(i = 0; i < n; i++)
    {
        if(mini > a[i])
        {
            mini = a[i];
        }
    }
    return (mini);
}
