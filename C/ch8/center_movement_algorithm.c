#include<stdio.h>

int main(void) {
#if 0
    int n;
    long num = 2;

    scanf("%d", &n);
    while(n--) {
        num = (num << 1); 
        num -= 1;
    }
    printf("%ld", num * num);
#else
    int n;
    
    scanf("%d", &n);
    printf("%d", (1+(1<<n)) * (1+(1<<n)));
#endif
    return 0;
}
