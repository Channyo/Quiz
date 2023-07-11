#include<stdio.h>

int main(void)
{
    int n, repeat, i;

    scanf("%d", &n);
    repeat = n / 4;

    for(i = 0; i < repeat; i++) {
        printf("long ");
    }
    printf("int");

    return 0;
}