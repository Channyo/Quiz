#include<iostream>

int main(void) {
    int value, i;

    std::cin >> value;
    
    for(i = 1; i < 10; i++) {
        std::cout << value << " " <<"*" << " " << i << " " << "=" << " " << value * i << std::endl;    
    }

    return 0;
}