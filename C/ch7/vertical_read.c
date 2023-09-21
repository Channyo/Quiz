#include<stdio.h>
#include<string.h>

int main(void) {
    char str[5][15];
    int str_size[5], i, j, max_size = 0;

    for(i = 0; i < 5; i++) {
        scanf("%s", &str[i]);
        str_size[i] = strlen(str[i]);

        if(max_size < str_size[i]) {
            max_size = str_size[i];
        }
    }

    for(j = 0; j < 15; j++) {

        if(j >= max_size) {
            break;
        }
        else {
            for(i = 0; i < 5; i++) {

                if(j < str_size[i]) {
                    printf("%c", str[i][j]);
                }
            }
        }
    }
    return 0;
}