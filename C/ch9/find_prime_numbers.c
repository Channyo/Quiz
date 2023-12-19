#include<stdio.h>

int main(void) {
    int n, num, rep_cnt, num_of_prime = 0, divisor_num;

    scanf("%d", &n);

    for(rep_cnt = 0; rep_cnt < n; rep_cnt++) {
        scanf("%d", &num);
        divisor_num = 2;

        while(divisor_num < num) {
            if(num % divisor_num == 0) {
                divisor_num = num;
                num_of_prime--;
            }
            else {
                divisor_num++;
            }
        }

        if(num == 1)
            num_of_prime--;
        num_of_prime++; 
    }

    printf("%d", num_of_prime);

    return 0;
}