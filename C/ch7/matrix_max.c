#include<stdio.h>

int main(void) {
    int matrix[9][9], i, j, max = 0, row, colu;

    for(i = 0; i < 9; i++) {

        for(j = 0; j < 9; j++) {
            scanf("%d", &matrix[i][j]);
            if(max <= matrix[i][j]) {
                max = matrix[i][j];
                row = i+1;
                colu = j+1;
            }
        }
    }
    printf("%d\n%d %d", max, row, colu);

    return 0;
}