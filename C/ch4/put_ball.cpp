#include<iostream>

using std::cin;
using std::cout;
using std::fill_n;

int main(void) {
    int n, m, i, j, k, rep1, rep2;

    cin >> n >> m;
    int *arr = new int[n];
    fill_n(arr, n, 0);
    for(rep1 = 0; rep1 < m; rep1++) {
        scanf("%d %d %d", &i, &j, &k);
        
        for(rep2 = i - 1; rep2 < j; rep2++) {
            arr[rep2] = k;
        }
    }

    for(rep1 = 0; rep1 < n; rep1++) {
        cout << arr[rep1] << " ";
    }
    delete[] arr;
}