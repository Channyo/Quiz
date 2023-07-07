#include<iostream>

int main(void) {
    int value, repeat;

    std::cin >> repeat;

    value = repeat * (repeat + 1);
    value >>= 1;

    std::cout << value << std::endl;

    return 0;
}