#include<stdio.h>

int main(void) {
    int a, b, i = 1;

    for(; i != 0; ) {
        scanf("%d %d", &a, &b);
        if((a == 0) && (b == 0))
            i = 0;
        else
            printf("%d\n", a+b);
    }

    return 0;
}