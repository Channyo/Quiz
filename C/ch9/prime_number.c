#include<stdio.h>

int main(void) {
    int m, n, sum = 0, min = 0;
    int num = 2, prime_cnt = 0;

    scanf("%d %d", &m, &n);
    for(; n >= m; n--) {
        
        for(num = 2; num < n; num++) {

            if(n % num == 0)
                num = n + 1;

        }
        if(num == n) {
            min = n;
            sum += n;
        }
    }

    if(sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);

    return 0;
}