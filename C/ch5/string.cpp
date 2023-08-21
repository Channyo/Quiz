#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int input_num, i, j;
    char str[1001];

    cin >> input_num;
    for(i = 0; i < input_num; i++) {
        cin >> str;

        for(j = 0; j < 1001; j++) {

            if(str[j] == NULL) {
                cout << str[0] << str[j-1] << "\n";
                break;
            }
        }
    }
    return 0;
}