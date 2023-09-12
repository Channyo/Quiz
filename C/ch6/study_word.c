#include <stdio.h>

#define ASCII_A             0x41
#define UPPER_LOWER_GAP     0x20

int main(void) {
    int word[26] = {0, }, max = 0;
    char str, i, num_of_max = 0, max_buf;

    while(scanf("%c", &str) != EOF) {
        
        if((str - ASCII_A) < 26 ) {
            word[str - ASCII_A]++;
        }
        else {
            str -= UPPER_LOWER_GAP;
            word[str - ASCII_A]++;
        }
    }

    for(i = 0; i < 26; i++) {

        if(max <= word[i]) {

            if(max == word[i]) {
                num_of_max++;
            }
            else {
                num_of_max = 0;
            }
            max_buf = i;
            max = word[i];
        }
    }

    if(num_of_max) {
        printf("?");
    }
    else {
        printf("%c", (max_buf + ASCII_A));
    }
    return 0;
}