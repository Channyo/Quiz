#include<stdio.h>

int main(void) {
    char white_chess[6] = {1, 1, 2, 2, 2, 8};
    char curr_chess[13], i;
    
    for(i = 0; i < 6; i++) {
        scanf("%d", &curr_chess[i]);
        white_chess[i] -= curr_chess[i];
        printf("%d ", white_chess[i]);
    }

    return 0;
}