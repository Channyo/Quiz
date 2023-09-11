#include<stdio.h>
#include<string.h>

int main(void) {
    char str[101], str_half_size, i, start_num, end_num, ret_value = 1;

    scanf("%s", str);
    start_num = 0;
    end_num = strlen(str) - 1;
    str_half_size = ((end_num + 1) >> 1);

    for(i = 0; i < str_half_size; i++) {

        if(str[start_num] != str[end_num]) {
            ret_value = 0;
            break;
        }
        start_num++;
        end_num--;
    }
    printf("%d", ret_value);

    return 0;
}