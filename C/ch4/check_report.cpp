#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int arr[30];
    int i, num;

    for(i = 0; i < 30; i++) {
        arr[i] = i + 1;
    }

    for(i = 0; i < 28; i++) {
        cin >> num;
        arr[num - 1] = 0;
    }

    for(i = 0; i < 30; i++) {
        
        if(arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }

    return 0;
}