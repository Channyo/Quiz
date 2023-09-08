#include<stdio.h>

#define ASCII_SPACE     32
#define ASCII_STAR      42

void Star_Print(char ascii, int cnt) {
    int exe_cnt;
    exe_cnt = cnt;
    while(exe_cnt) {
        printf("%c", ascii);
        exe_cnt--;
    }
}

int main(void) {
    char n;
    int null_cnt, star_cnt, line, i;

    scanf("%d", &n);
    line = (n << 1) - 1;
    null_cnt = n - 1;
    star_cnt = 1;

    for(i = 1; i <= line; i++) {
        Star_Print(ASCII_SPACE, null_cnt);
        Star_Print(ASCII_STAR, star_cnt);
        printf("\n");

        if(i < n) {
            null_cnt--;
            star_cnt += 2;
        }
        else {
            null_cnt++;
            star_cnt -= 2;
        }
    }

    return 0;
}