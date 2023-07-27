#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n, x, i, cnt = 0;
    int *arr;
    int *result;

    scanf("%d %d", &n, &x);

    arr = (int *)malloc(sizeof(int) * n);
    result = (int *)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] < x) {
            result[cnt] = arr[i];
            cnt++;
        }
    }
    
    for(i = 0; i < cnt; i++) {
        printf("%d ", result[i]);
    }

    free(arr);
    free(result);

    return 0;
}