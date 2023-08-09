#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n, m, i, j, k, temp;
    int *arr;

    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int) * n);

    for(k = 0; k < n; k++) {
        arr[k] = k + 1;
    }

    for(k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        i--;        //배열과 맟추기 위해
        j--;        //배열과 맟추기 위해
        while(j > i) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    for(k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    free(arr);
    
    return 0;
}