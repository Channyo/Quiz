#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;

int main(void) {
    string c_str;
    int num;

    cin >> c_str;
    cin >> num;
    cout << c_str[num - 1];

    return 0;
}