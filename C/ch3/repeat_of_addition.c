#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int *a, *b; 
    int i, repeat_of_num;

    scanf("%d", &repeat_of_num);

    a = (int *)malloc(repeat_of_num * sizeof(int));
    b = (int *)malloc(repeat_of_num * sizeof(int));
    
    for(i = 0; i < repeat_of_num; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for(i = 0; i < repeat_of_num; i++) {
        printf("%d\n", (a[i]+b[i]));
    }

    free(a);
    free(b);

    return 0;
}