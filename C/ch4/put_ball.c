#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    int n, m, i, j, k, rep1, rep2;
    int *arr;

    scanf("%d %d", &n, &m);
    arr = (int *)malloc(sizeof(int) * n);
    memset(arr, 0, sizeof(int)*n);
    for(rep1 = 0; rep1 < m; rep1++) {
        scanf("%d %d %d", &i, &j, &k);
        
        for(rep2 = i - 1; rep2 < j; rep2++) {
            arr[rep2] = k;
        }
    }

    for(rep1 = 0; rep1 < n; rep1++) {
        printf("%d ", arr[rep1]);
    }
    free(arr);
}