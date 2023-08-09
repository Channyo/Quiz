#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int n, m, i, j, k, temp;

    cin >> n >> m;
    int *arr = new int[n];

    for(k = 0; k < n; k++) {
        arr[k] = k + 1;
    }

    for(k = 0; k < m; k++) {
        cin >> i >> j;
        i--;        //배열과 맟추기 위해
        j--;        //배열과 맟추기 위해
        while(j > i) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    for(k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    delete[] arr;
    
    return 0;
}