Input:
5
1 2 3 4 5
Output:
5 4 3 2 1

A solution in c++
#include <iostream>
using namespace std;

void reverseNum(int i, int num, int *array) {
    if (i < num) {
        reverseNum(i+1, num, array);
        printf("%d ", array[i]);
    }
}

int main() {
    int num;
    cin >> num;
    int array[num];

    for (int i = 0; i < num; i++) {
        cin >> array[i];
    }

    reverseNum(0, num, array);

    return 0;
}