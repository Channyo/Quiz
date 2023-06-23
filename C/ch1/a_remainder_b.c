#include<stdio.h>

int main(void){
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);
    d = (a + b) % c;
    printf("%d\n", d);
    d = ((a % c) + (b % c)) % c;
    printf("%d\n", d);
    d = (a * b) % c;
    printf("%d\n", d);
    d = ((a % c) * (b % c)) % c;
    printf("%d", d);

    return 0;
}