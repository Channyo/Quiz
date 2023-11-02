#include<stdio.h>

int main(void) {
    int n, k, i = 1, num = 0, half, a;
    int value = 0;

    scanf("%d %d", &n, &k);
    //half = (n + 1) >> 1;
    while(n >= i) {
        
        a = n % i;
        if(a == 0) {
            num++;
            
            if(num == k) {
                value = i;
                break; 
            } 
        }
        i++;
    }
    printf("%d", value);

    return 0;
}