#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
    int a, b, i = 1;

    for(; i != 0; ) {
        cin >> a >> b;
        if((a == 0) && (b == 0))
            i = 0;
        else
            cout << a+b << "\n";
    }

    return 0;
}