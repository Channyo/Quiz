#include<stdio.h>
#if 0
enum {
    vertical_low = 0,
    horizontal_low,
    vertical_plus,
    horizontal_plus,
};

int main(void) {
    long x;
    int vertical = 1, horizontal = 1, state = 0;

    scanf("%ld", &x);

    while(x > 1) {
        x--;
        switch(state) {
            case vertical_low : 
                horizontal++;
                state = vertical_plus;
                break;

            case horizontal_low :
                vertical++;
                state = horizontal_plus;
                break;

            case vertical_plus :
                horizontal--;
                vertical++;
                if(horizontal == 1) {
                    state = horizontal_low;
                }
                break;

            case horizontal_plus :
                vertical--;
                horizontal++;
                if(vertical == 1) {
                    state = vertical_low;
                }
                break;
        }
    }
    printf("%d/%d", vertical, horizontal);

    return 0;
}
#else
int main(void) {
    int x, n = 1;
    
    scanf("%d", &x);
    
    while(x > n) {
        x -= n;
        n++;
    }

    if((n % 2) == 0)
        printf("%d/%d", x, n-x + 1);
    else
        printf("%d/%d", n-x+1, x );
    
    return 0;
}
#endif