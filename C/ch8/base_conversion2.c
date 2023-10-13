#include <stdio.h>

int main(void) {
    char str[32];
    long n;
    int b, num, i;

    scanf("%ld %d", &n, &b);

    for(i = 0; i < 32; i++) {
        num = n % b;
        if(num < 10)
            num += '0';
        else {
            num += 'A';
            num -= 10;
        }
        str[i] = (char)num;

        if(n < b)
            break;
        else
            n /= b;
    }

    for(num = i; num >= 0; num--) {
        printf("%c", str[num]);
    }

    return 0;
}