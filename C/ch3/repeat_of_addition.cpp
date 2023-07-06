#include<iostream>

int main(void) {
    int i, repeat_of_num;

    std::cin >> repeat_of_num;
    int *a = new int[repeat_of_num];
    int *b = new int[repeat_of_num];
    int *c = new int[repeat_of_num];

    for(i = 0; i < repeat_of_num; i++) {
        std::cin >> a[i] >> b[i];
    }

    for (i = 0; i < repeat_of_num; i++) {
        c[i] = a[i] + b[i];
        std::cout << c[i] << std::endl; 
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}