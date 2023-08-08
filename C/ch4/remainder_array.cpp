#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int a, b, i, k = 0;
    int arr[42] = {0,};

    for(i = 0; i < 10; i++) {
        cin >> a;
        b = a % 42;
        if(arr[b] == 0) {
            arr[b] = 1;
            k++;
        }
    }
    cout << k;

    return 0;
}