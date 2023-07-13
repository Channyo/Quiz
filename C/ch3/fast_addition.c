#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int T, i;
    int a, b;

    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a + b));
    }

    return 0;

}