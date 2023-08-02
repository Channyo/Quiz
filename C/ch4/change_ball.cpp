#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int n, m, i, j, rep, temp;

    cin >> n >> m;
    int *arr = new int[n];
    for(rep = 0; rep < n; rep++) {
        arr[rep] = rep + 1;
    }

    for(rep = 0; rep < m; rep++) {
        cin >> i >> j;
        temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    for(rep = 0; rep < n; rep++) {
        cout << arr[rep] << " ";
    }
    delete[] arr;

    return 0;
}