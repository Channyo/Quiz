#include<stdio.h>

int main(void) {
    long n;
    int cnt = 1, num = 0;

    scanf("%ld", &n);

    while((n - num) > 1) {
        num += (6 * cnt);
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}