#include<stdio.h>

int main(void) {
    int curr, max = 0, sum = 0, rep, i;
    float aver;

    scanf("%d", &rep);
    for(i = 0; i < rep; i++) {
        scanf("%d", &curr);
        sum += curr;
        if(max < curr) {
            max = curr;
        }
    }
    aver = (float)sum / i;
    aver = (float)aver / max * 100;
    printf("%02f", aver);

    return 0;
}