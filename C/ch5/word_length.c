#include<stdio.h>

int main(void) {
    char str[101];
    int i = 0;

    scanf("%s", str);
    for(i = 0; i < 101; i++) {
        if(str[i] == NULL) {
            break;
        }
    }
    printf("%d", i);

    return 0;
}