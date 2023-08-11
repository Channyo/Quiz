#include<stdio.h>
#include<stdlib.h>

int main(void) {
    char str[1000] = {0, };
    int num;

    scanf("%s", str);
    scanf("%d", &num);
    printf("%c", str[num - 1]);

    return 0;
}