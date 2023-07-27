#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int n, x, i, cnt = 0;
    
    cin >> n >> x;
    int *arr = new int[n];
    int *result = new int[n];

    for(i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] < x) {
            result[cnt] = arr[i];
            cnt++;
        }
    }
    
    for(i = 0; i < cnt; i++) {
        cout << result[i] << " ";
    }

    delete[] arr;
    delete[] result;

    return 0;
}