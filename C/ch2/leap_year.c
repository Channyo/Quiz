#include<stdio.h>

int main(void) {
    int year, leap_year;

    scanf("%d", &year);

    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        leap_year = 1;
    else
        leap_year = 0;

    printf("%d", leap_year);

    return 0;

}