#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
    int t, r, i, j, k, str_size;
    char str[21];

    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> r >> str;
        str_size = strlen(str);
        
        for(j = 0; j < str_size; j++) {
            
            for(k = 0; k < r; k++) {
                cout << str[j];
            }
        }
        cout << "\n";
    }

    return 0;
}