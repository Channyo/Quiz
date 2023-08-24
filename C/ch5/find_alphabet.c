#include<stdio.h>
#include<string.h>

#define st_small_letter_num         97
#define end_small_letter_num        122         

int main(void) {
    char str[101];
    int alpha[26];
    int num, i, arr_num;

    memset(alpha, -1, (sizeof (alpha)));
    scanf("%s", str);
    num = strlen(str);
    for(i = 0; i < num; i++) {
        arr_num = str[i] - st_small_letter_num;

        if(alpha[arr_num] == -1) {
            alpha[arr_num] = i;
        }
    }

    for(i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }

    return 0;
}