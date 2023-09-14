#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
    char n, i, j, str_size, group_word_cnt = 0, curr_buf, prev_buf;
    char str[101], buf[26] = {0, };
    scanf("%d", &n);

    for(i = 0; i < n; i ++) {
        scanf("%s", str);
        str_size = strlen(str);
        group_word_cnt++;
        prev_buf = curr_buf =  str[0] - 'a';
        buf[curr_buf] = 1;

        for(j = 1; j < str_size; j++) {
            curr_buf = (str[j] - 'a');

            if(curr_buf != prev_buf) {

                if(buf[curr_buf] == 1) {
                    j = str_size;
                    group_word_cnt--;
                }
                else {
                    prev_buf = curr_buf;
                }
            }
            buf[curr_buf] = 1;
        }
        memset(buf, 0, sizeof(buf));
    }
    printf("%d", group_word_cnt);

    return 0;
}