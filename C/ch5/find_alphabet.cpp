#include<iostream>
#include<cstring>

#define st_small_letter_num         97
#define end_small_letter_num        122

using std::cin;
using std::cout;
using std::fill_n;

int main(void) {
    char str[101];
    int alpha[26];
    int num, i, arr_num;

    fill_n(alpha,(sizeof(alpha)/ sizeof(*alpha)), -1);
    cin >> str;
    num = strlen(str);
    for(i = 0; i < num; i++) {
        arr_num = str[i] - st_small_letter_num;

        if(alpha[arr_num] == -1) {
            alpha[arr_num] = i;
        }
    }

    for(i = 0; i < 26; i++) {
        cout << alpha[i] << " ";
    }

    return 0;
}