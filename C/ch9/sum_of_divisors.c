#include <stdio.h>

int main(void) {
    int n, i = 1, k, sum = 0, num = 0, arr[10000];

    while(1) {
        scanf("%d", &n);

        if(n == -1)
            break;

        i = n;

        while(i > 1) {

            if(n % i == 0) {
                arr[num] = n / i;
                sum += arr[num];
                num++;
            }
            i--;
        }
        
        if(sum != n)
            printf("%d is NOT perfect.\n", n);
        else {
            printf("%d = 1", n);

            for(k = 1;k < num; k++) {
                printf(" + %d", arr[k]);
            }
            printf("\n");
        }
        sum = 0;
        num = 0;
    }
    return 0;
}
