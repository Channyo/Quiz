#include<stdio.h>

int main(void) {
    int value, repeat;

    scanf("%d", &repeat);
 
    value = repeat * (repeat + 1);
    value >>= 1;

    printf("%d", value);

    return 0;
}