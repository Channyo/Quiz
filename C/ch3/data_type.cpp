#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void)
{
    int n, repeat, i;

    cin >> n;
    repeat = n / 4;

    for(i = 0; i < repeat; i++) {
        cout << "long" << " ";
    }
    cout << "int" << endl;

    return 0;
}