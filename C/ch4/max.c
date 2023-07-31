#include<stdio.h>

int main(void) {
    int i, num, max = 0;
    int arr[9];

    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);

        if(max < arr[i]) {
            max = arr[i];
            num = i + 1;
        }
    }
    printf("%d\n%d", max, num);

    return 0;
}