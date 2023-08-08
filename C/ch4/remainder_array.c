#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a, b, i, k = 0;
    int arr[42] = {0,};

    for(i = 0; i < 10; i++) {
        scanf("%d", &a);
        b = a % 42;
        if(arr[b] == 0) {
            arr[b] = 1;
            k++;
        }
    }
    printf("%d", k);

    return 0;
}