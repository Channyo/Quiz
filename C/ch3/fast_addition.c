#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int T, i;
    int *a, *b;

    a = (int *)malloc(T * sizeof(int));
    b = (int *)malloc(T * sizeof(int));
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for(i = 0; i < T; i++) {
        printf("%d\n", (a[i] + b[i]));
    }

    free(a);
    free(b);

    return 0;

}