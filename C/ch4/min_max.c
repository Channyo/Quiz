#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n, i, min, max;
    int *arr;

    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    scanf("%d", &arr[0]);
    min = max = arr[0];

    for(i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    printf("%d %d", min, max);
    
    free(arr);
    return 0;
    

}