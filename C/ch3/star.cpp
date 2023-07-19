#include<iostream>

int main(void) {
    int t, i, j;

    std::cin >> t;
    for(i = 0; i < t; i++) {
        for(j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}