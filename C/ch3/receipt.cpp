#include<iostream>

int main(void) {
    int x, n, a, b, total = 0;
    int i;

    std::cin >> x >> n;
    
    for(i = 0; i < n; i++) {
        std::cin >> a >> b;
        total += (a * b);
    }

    if(total == x)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}