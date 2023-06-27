#include<iostream>

int main(void) {
    int year, leap_year;

    std::cin >> year;

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        leap_year = 1;
    else
        leap_year = 0;

    std::cout << leap_year << std::endl;

    return 0;
}