#include<stdio.h>

int main(void) {
    int value, i;

    scanf("%d", &value);

    for(i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", value, i, value * i);
    }
    return 0;
}