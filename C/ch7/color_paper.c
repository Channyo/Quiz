#include<stdio.h>

int main(void) {
    int arr[100][100] = {0, };
    int sum = 0, num, num_cnt, x_cnt, y_cnt, x, y, arr_cnt;
    int *pt;
    
    pt = &arr[0][0];
    scanf("%d", &num);
    num_cnt = num;

    while(num_cnt--) {
        scanf("%d %d", &x, &y);

        for(x_cnt = x; x_cnt < (x + 10); x_cnt++) {

            for(y_cnt = y; y_cnt < (y + 10); y_cnt++) {
                arr[y_cnt][x_cnt] = 1;
            }
        }
    }
    arr_cnt = sizeof(arr)/sizeof(int);
    while(arr_cnt--) {
        sum += *(pt);
        pt++;
    }
    printf("%d", sum);

    return 0;
}