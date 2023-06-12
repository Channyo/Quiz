#include<stdio.h>

double Divide_Func(int a, int b) {
    double c;

    c = (double)a / (double)b;
    
    return c;
}

int main() {
    int a, b;
    double c;

    scanf("%d %d", &a, &b);
    c = Divide_Func(a, b);
    printf("%.15g", c);

    return 0;
}