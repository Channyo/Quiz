#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
    int n, i, j;

    cin >> n;
    for(i = n - 1; i >= 0; i--) {
        
        for(j = 0; j < n; j++) {
            
            if(j < i)       cout << " ";
            else            cout << "*";
        }
        cout <<"\n";
    }

    return 0;
}