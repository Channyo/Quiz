#include<stdio.h>

int Addition_Func(int a, int b) {
    int c;

    c = a + b;
    return c;
}

int Subtraction_Func(int a, int b) {
    int c;

    c = a - b;
    return c;
}

int Multiplication_Func(int a, int b) {
    int c;

    c = a * b;
    return c;
}

int Division_Func(int a, int b) {
    int c;

    c = a / b;
    return c;
}

int Remainder_Func(int a, int b) {
    int c;
    
    c = a % b;
    return c;
}


int main(void) {
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = Addition_Func(a, b);
    printf("%d\n", c);
    c = Subtraction_Func(a, b);
    printf("%d\n", c);
    c = Multiplication_Func(a, b);
    printf("%d\n", c);
    c = Division_Func(a, b);
    printf("%d\n", c);
    c = Remainder_Func(a, b);
    printf("%d", c);

    return 0;
}