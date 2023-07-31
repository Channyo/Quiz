#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int i, num, max = 0;
    int arr[9];

    for(i = 0; i < 9; i++) {
        cin >> arr[i];

        if(max < arr[i]) {
            max = arr[i];
            num = i + 1;
        }
    }
    cout << max << "\n" << num;

    return 0;
}