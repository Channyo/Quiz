#include<stdio.h>

int main(void) {
    long a, b, c, d;

    scanf("%ld %ld %ld", &a, &b, &c);
    d = a + b + c;
    printf("%ld", d);

    return 0;
}