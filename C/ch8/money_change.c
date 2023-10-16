#include<stdio.h>

int main(void) {
    int c, t, rep_cnt;
    int money;

    scanf("%d", &t);
    for(rep_cnt = 0; rep_cnt < t; rep_cnt++) {
        scanf("%d", &c);
        money = c / 25;
        c %= 25;
        printf("%d ", money);
        money = c / 10;
        c %= 10;
        printf("%d ", money);
        money = c / 5;
        c %= 5;
        printf("%d ", money);
        money = c / 1;
        printf("%d\n", money);
    }
    return 0;
}