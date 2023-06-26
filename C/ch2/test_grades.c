#include<stdio.h>

int main(void) {
    int score;
    char grades;

    scanf("%d", &score);
    if(score < 60 )         grades = 'F';
    else if(score < 70)     grades = 'D';
    else if(score < 80)     grades = 'C';
    else if(score < 90)     grades = 'B';
    else if(score <= 100)    grades = 'A';

    printf("%c", grades);
    return 0;
}