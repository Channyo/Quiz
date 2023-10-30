#include <stdio.h>

int main(void) {
    long A, B, V, day;
    int x;

    scanf("%ld %ld %ld", &A, &B, &V);
    V -= A;
    x = A - B;
    day = V/x;
    if(V%x == 0)
        day += 1;
    else
        day += 2;

    printf("%d", day);

    return 0;
}
