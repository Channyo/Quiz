#include<stdio.h>

int main(void) {
    int n, sum = 0, i;
    char str[101];

    scanf("%d", &n);
    scanf("%s", str);
    for(i = 0; i < n; i++) {
        if(str[i] == NULL) {
            break;
        }
        else {
            sum += (int)str[i];
            sum -= (int)'0';
        }
    }
    printf("%d", sum);
    
    return 0;
}