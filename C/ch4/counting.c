#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n, v, i, num = 0;
    int *data;

    scanf("%d", &n);
    data = (int *)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    scanf("%d", &v);
    
    for(i = 0; i < n; i++) {
        if(data[i] == v)
            num++;
    }
    printf("%d", num);
    free(data);
    return 0;
}