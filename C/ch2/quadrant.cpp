#include<iostream>

int main(void) {
    int x, y, quad;

    std::cin >> x >> y;

    if((x > 0) && (y > 0))          quad = 1;
    else if ((x < 0) && (y > 0))    quad = 2;
    else if ((x < 0) && (y < 0))    quad = 3;
    else if ((x > 0) && (y < 0))    quad = 4;

    std::cout << quad << std::endl;

    return 0;
}