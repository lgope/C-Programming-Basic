/*
Input:
5
1 2 3 4 5
Output:
1 5
2 4
3 3
A solution in c++
*/

#include <iostream>
using namespace std;

void recursiveFunction(int i, int num, int *array) {
    if (i <= num) {
        printf("%d %d\n", array[i], array[num]);
        recursiveFunction(i+1, num-1, array);
    }
}
int main() {
    int num;
    cin >> num;
    int array[num];

    for (int i = 0; i < num; i++) {
        cin >> array[i];
    }

    recursiveFunction(0, num-1, array);

    return 0;
}