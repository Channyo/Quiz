#include<iostream>

using std::cin;
using std::cout;


int main(void) {
    int i, n, v, num= 0;

    cin >> n;

    int *data = new int[n];

    for(i = 0; i < n; i++) {
        cin >> data[i];
    }
    cin >> v;
    
    for(i = 0; i < n; i++) {
        if(data[i] == v)
            num++;
    }
    cout << num;
    delete[] data;

    return 0;
}