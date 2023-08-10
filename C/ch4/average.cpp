#include<iostream>

using std::cin;
using std::cout;

int main(void) {
    int curr, max = 0, sum = 0, rep, i;
    float aver;

    cin >> rep;
    for(i = 0; i < rep; i++) {
        cin >> curr;
        sum += curr;
        if(max < curr) {
            max = curr;
        }
    }
    aver = (float)sum / i;
    aver = (float)aver / max * 100;
    cout << aver;

    return 0;
}