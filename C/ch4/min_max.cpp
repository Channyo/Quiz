#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int n, i, min, max;

    cin >> n;
    int *arr = new int[n];
    cin >> arr[0];
    min = max = arr[0];

    for(i = 1; i < n; i++) {
        cin >> arr[i];

        if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    cout << min << " " << max;
    delete[] arr;

    return 0;
}