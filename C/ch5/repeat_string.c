#include<stdio.h>
#include<string.h>

int main(void) {
    int t, r, i, j, k, str_size;
    char str[21];

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d %s", &r, str);
        str_size = strlen(str);
        
        for(j = 0; j < str_size; j++) {
            
            for(k = 0; k < r; k++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}