#include<stdio.h>
#define BUFFER_SIZE_MAX     50

int main(void) {
    char name[BUFFER_SIZE_MAX] = {0,};
    int i = 0;

    scanf("%s", &name);
    for(i = 0; i < BUFFER_SIZE_MAX; i++) {
        if(name[i] == 0) {
            break;
        }
        printf("%s",name[i]);
    }

    printf("??!");
}