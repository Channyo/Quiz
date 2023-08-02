#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n, m, i, j, rep, temp;
    int *arr;

    scanf("%d %d", &n, &m);
    arr = (int *)malloc(sizeof(int) * n);
    for(rep = 0; rep < n; rep++) {
        arr[rep] = rep + 1;
    }

    for(rep = 0; rep < m; rep++) {
        scanf("%d %d", &i, &j);
        temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    for(rep = 0; rep < n; rep++) {
        printf("%d ", arr[rep]);
    }
    free(arr);

    return 0;
}