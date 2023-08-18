#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    char str[101];
    int i;

    cin >> str;
    for(i = 0; i < 101; i++) {
        
        if(str[i] == NULL) {
            break;
        }
    }
    cout << i;

    return 0;
}