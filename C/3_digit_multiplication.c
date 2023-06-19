#include<stdio.h>

int One_Place_Multiplication(int value) {
    int place_value;

    place_value = value % 10;

    return place_value;
}

int Ten_Place_Multiplication(int value) {
    int place_value;

    place_value = value / 10;

    place_value = One_Place_Multiplication(place_value);

    return place_value;
}

int Handred_Place_Multiplication(int value) {
    int place_value;

    place_value = value / 100;

    return place_value;
}

int main(void) {
    int a, b;
    int one_place, ten_place, handred_place, multiplication_value;

    scanf("%d %d", &a, &b);

    one_place = a * One_Place_Multiplication(b);
    ten_place = a * Ten_Place_Multiplication(b);
    handred_place = a * Handred_Place_Multiplication(b);
    multiplication_value = a * b;

    printf("%d\n%d\n%d\n%d", one_place, ten_place, handred_place, multiplication_value);

    return 0;
}