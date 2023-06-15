#include<stdio.h>
#define BUFFER_SIZE_MAX     50

int main(void) {
    char name[BUFFER_SIZE_MAX] = {0,};

    scanf("%s", name); 
    printf("%s",name); 
    printf("??!");

    return 0;
}