#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int n, i, sum = 0;
    char str[101];

    cin >> n;
    cin >> str;

    for(i = 0; i < n; i++) {

        if(str[i] == NULL) {
            break;
        }
        else {
            sum += (int)str[i];
            sum -= (int)'0';
        }
    }
    cout << sum;

    return 0;
}