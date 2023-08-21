#include<stdio.h>

int main(void) {
    int input_num, i, j;
    char str[1001], start;
    scanf("%d", &input_num);

    for(i = 0; i < input_num; i++) {
        scanf("%s", str);
        
        for(j = 0; j < 1001; j++) {
            
            if(str[j] == NULL) {
                printf("%c%c\n", str[0], str[j-1]);
                break;
            }
        }
    }
    return 0;
}