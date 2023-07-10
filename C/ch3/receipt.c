#include<stdio.h>

int main(void) {
    int x, n, a, b, total = 0;
    int i;

    scanf("%d %d", &x, &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        total += (a * b);
    }

    if(total == x)
        printf("Yes");
    else
        printf("No");

    return 0;
}