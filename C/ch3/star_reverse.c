#include<stdio.h>

int main(void) {
    int n, i, j;

    scanf("%d", &n);
    for(i = n - 1; i >= 0; i--) {
        
        for(j = 0; j < n; j++) {
            
            if(j < i)       printf(" ");
            else            printf("*");
        }
        printf("\n");
    }

    return 0;
}