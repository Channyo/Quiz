#include<stdio.h>

int main(void) {
    int value[2][100][100] = {0, }, result[100][100] = {0, }, n, m, i, j, k;

    scanf("%d %d", &n, &m);

    for(i = 0; i < 2; i++) {

        for(j = 0; j < n; j++) {

            for(k = 0; k < m; k++) {
                scanf("%d",&value[i][j][k]);
            }
        }
    }

    for(j = 0; j < n; j++) {

        for(k = 0; k < m; k++) {
            result[j][k] = value[0][j][k] + value[1][j][k];
            printf("%d ", result[j][k]);
        }
        printf("\n");
    }

    return 0;
}