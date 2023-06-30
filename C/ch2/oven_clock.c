#include<stdio.h>

int main(void)
{
    int A, B, C, D;

    scanf("%d %d\n %d", &A, &B, &C);

    if(B + C < 60) {
        B += C;
    }
    else {
        D = (B + C) / 60;
        B = (B + C) % 60;
        
        if((A + D) > 23)
            A = (A + D) - 24;
        else
            A += D;
    }

    printf("%d %d", A, B);

    return 0;
}