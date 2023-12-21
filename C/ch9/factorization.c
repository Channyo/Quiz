#include<stdio.h>

int main(void) {
    int n, factorization_num = 2;

    scanf("%d", &n);
    
    while(n > factorization_num) {
        if(n % factorization_num == 0) {
            printf("%d\n", factorization_num);
            n = n/factorization_num;
        }
        else {
            factorization_num++;
        }
    }

    if(n != 1)
        printf("%d", n);

    return 0;
}