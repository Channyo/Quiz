#include<iostream>

int main(void) {
    int a, b, t, i;

    std::cin >> t;

    for(i = 0; i < t; i++) {
        std::cin >> a >> b;
        std::cout << "Case %" << i + 1 << ": " << a+b << std::endl;
    }

    return 0;
}